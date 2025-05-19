#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    /*
        lt      rt
    top # # # # #
        # . . . #
        # . . . #
        # . . . #
    btm # # # # #
    RIGHT   lt -> rt-1
    DOWN    top -> btm-1
    LEFT    rt -> lt+1
    UP      btm -> top-1
    
    lt --> <-- rt
    top --> <-- btm
    */

    int lt = 0, rt = n - 1;
    int top = 0, btm = n - 1;

    while (lt <= rt){
        // L-R
        for (int i=lt; i<=rt-1; i++){
            cout << mat[top][i] << " ";
        }
        // T-B
        for (int i=top; i<=btm-1; i++){
            cout << mat[i][rt] << " ";
        }
        // R-L
        for (int i=rt; i>=lt+1; i--){
            cout << mat[btm][i] << " ";
        }
        // B-T
        for (int i=btm; i>=top+1; i--){
            cout << mat[i][lt] << " ";
        }
        lt++;
        rt--;
        top++;
        btm--;
    }
    cout << endl;
    return 0;
}