#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res(INT_MIN), profit, mini(INT_MAX);
    for (int i=0; i<n; i++){
        mini = min(mini, arr[i]);
        profit = arr[i]-mini;
        res = max(res, profit);
    }
    cout << res << endl;
    return 0;
}