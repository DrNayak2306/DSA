#include<bits/stdc++.h>

using namespace std;

int main(){
    // common input
    cout << "n\narray\nk\n";
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    
    // brute-force
    // for (int i=0; i<arr.size(); i++){
    //     for (int j=i+1; j<arr.size(); j++){
    //         long sum = arr[i]+arr[j];
    //         if (sum == k){
    //             cout << i << "," j << endl;
    //             return 0;
    //         }
    //     }
    // }

    // better
    // map<int, int> mpp;
    // for (int i=0; i<arr.size(); i++){
    //     int rem = k-arr[i];
    //     if (mpp.find(rem) != mpp.end()){
    //         cout << mpp[rem] << "," << i << endl;
    //         return 0;
    //     }
    //     mpp[arr[i]] = i;
    // }

    // optimal
    int left(0), right(arr.size()-1);
    sort(arr.begin(), arr.end());
    while (left < right){
        long sum = arr[left] + arr[right];
        if (sum == k){
            cout << left << "," << right << endl;
            return 0;
        }
        else if (sum < k) left++;
        else right--;
    }
    
    cout << "-1,-1\n";
    return 0;
}