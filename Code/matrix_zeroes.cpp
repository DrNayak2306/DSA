#include<bits/stdc++.h>

using namespace std;

void mark(vector<vector<int>> &mat, int row, int col){
    int n(mat.size()), m(mat[0].size());
    for (int i=0; i<m; i++){
        mat[row][i] = -1;
    }
    for (int i=0; i<n; i++){
        mat[i][col] = -1;
    }
}

void display_matrix(vector<vector<int>> &mat){
    for (int i=0; i<mat.size(); i++){
        for (int j=0; j<mat[0].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    // brute-force
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         if (mat[i][j] == 0){
    //             mark(mat, i, j);
    //         }
    //     }
    // }
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         if (mat[i][j] == -1){
    //             mat[i][j] = 0;
    //         }
    //     }
    // }
    // display_matrix(mat);

    // better
    // vector<int> col_bit(m, 0), row_bit(n, 0);
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         if (mat[i][j] == 0){
    //             row_bit[i] = 1;
    //             col_bit[j] = 1;
    //         }
    //     }
    // }
    
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         if (row_bit[i] == 1 || col_bit[j] == 1){
    //             mat[i][j] = 0;
    //         }
    //     }
    // }

    // display_matrix(mat);

    // optimal
    int left_corner(1); //  taken from column leader
    for (int i=0; i<m; i++){
        if (mat[0][i] == 0) left_corner = 0;
    }
    for (int i=0; i<n; i++){
        if (mat[i][0] == 0) left_corner = 0;
    }

    for (int i=1; i<n; i++){
        for (int j=1; j<m; j++){
            if (mat[i][j] == 0){
                mat[0][j] = 0;
                mat[i][0] = 0;
            }
        }
    }

    for (int i=1; i<n; i++){
        for (int j=1; j<m; j++){
            if (mat[i][0] == 0 || mat[0][j] == 0){
                mat[i][j] = 0;
            }
        }
    }
    if (mat[0][0] == 0){
        for (int i=0; i<m; i++){
            mat[0][i] = 0;
        }
    }
    if (left_corner == 0){
        for (int i=0; i<n; i++){
            mat[i][0] = 0;
        }
    }
    
    display_matrix(mat);
    return 0;
}