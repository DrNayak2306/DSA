#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;
    
    int cnt(0);
    // brute-force
    // for (int i=0; i<n; i++){
    //     for (int j=i; j<n; j++){
    //         long sum(0);
    //         for (int k=i; k<=j; k++){
    //             sum += arr[k];
    //         }
    //         if (sum == k){
    //             cnt++;
    //         }
    //     }
    // }
    
    // better
    // for (int i=0; i<n; i++){
    //     long sum = 0;
    //     for (int j=i; j<n; j++){
    //         sum += arr[j];
    //         if (sum == k){
    //             cnt++;
    //         }
    //     }
    // }

    // optimal
    map<long, int> mpp({{0,1}});
    long sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
        cnt += mpp[sum-k];
        mpp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}