#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // brute-force
    // long sum(0), res(LONG_MIN);
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         for (int k=i; k<=j; k++){
    //             sum += arr[k];
    //         }
    //         res = max(res, sum);
    //     }
    // }
    // cout << res << endl;

    // better
    // long sum(0), res(LONG_MIN);
    // for (int i=0; i<n; i++){
    //     sum = 0;
    //     for (int j=i+1; j<n; j++){
    //         sum += arr[j];
    //         res = max(res, sum);
    //     }
    // }
    // cout << res << endl;

    // optimal
    long sum(0), res(LONG_MIN);
    for (int i=0; i<n; i++){
        sum += arr[i];
        res = max(res, sum);
        if (sum < 0){
            sum = 0;
        }
    }
    cout << res << endl;
    return 0;
}