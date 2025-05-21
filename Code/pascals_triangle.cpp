#include<bits/stdc++.h>

using namespace std;

int main(){
    /* element
    row,col -> r-1Cc-1
    r-1Cc-1 = r-1 * r-2 * ... * r-c+1 / 1 * 2 * ... * c-1
    */
    // int r, c;
    // cin >> r >> c;
    
    // long long res = 1;
    // for (int i=1; i<c; i++){
    //     res *= (r-i);
    //     res /= i;
    // }
    // cout << res << endl;

    /* row 
    r-1C0, r-1C1, ... r-1Cr-1
    1, r-1/1, r-1/1 * r-2/2, ..., r-1/1 * r-2/2 * ... * 1/r-1
    */
    // int row;
    // cin >> row;
    // long long res = 1;
    // cout << 1 << " ";
    // for (int i=1; i<row; i++){
    //     res *= (row-i);
    //     res /= i;
    //     cout << res << " ";
    // }
    // cout << endl;

    /* triangle
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    */
    int n;
    cin >> n;
    long long res;
    for (int i=1; i<=n; i++){
        res = 1;
        cout << 1 << " ";
        for (int j=1; j<i; j++){
            res *= (i-j);
            res /= j;
            cout << res << " ";
        }
        cout << endl;
    }


    return 0;
}