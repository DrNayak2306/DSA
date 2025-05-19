#include<bits/stdc++.h>

using namespace std;

void display_matrix(vector<vector<int>> &mat){
    for (int i=0; i<mat.size(); i++){
        for (int j=0; j<mat[0].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    // brute-force
    // vector<vector<int>> ans(n, vector<int>(n));
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         ans[j][n-1-i] = mat[i][j];
    //     }
    // }
    // display_matrix(ans);

    // optimal
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i=0; i<n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }

    display_matrix(mat);
    return 0;
}