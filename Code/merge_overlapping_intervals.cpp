#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));
    for (int i=0; i<n; i++) cin >> arr[i][0] >> arr[i][1];
    
    // optimal
    sort(arr.begin(), arr.end());
    int low = arr[0][0], high = arr[0][1];
    vector<vector<int>> res;
    for (int i=1; i<n; i++){
        if (arr[i][0] > high){
            res.push_back({low, high});
            low = arr[i][0];
            high = arr[i][1];
        }
        else{
            high = max(high, arr[i][1]);
        }
    }
    res.push_back({low, high});
    for (auto i: res){
        cout << i[0] << ", " << i[1] << endl;
    }


    return 0;
}