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

    // brute-force
    // int count = 0;
    // for (int i=0; i<n; i++){
    //     int XOR = 0;
    //     for (int j=i; j < n; j++){
    //         for (int k=i; k<=j; k++){
    //             XOR ^= arr[k];
    //         }
    //         if (XOR == k){
    //             count++;
    //         }
    //     }
    // }
    // cout << count << endl;

    // better
    // int count = 0;
    // for (int i=0; i<n; i++){
    //     int XOR = 0;
    //     for (int j=i; j<n; j++){
    //         XOR^=arr[j];
    //         if (XOR==k){
    //             count++;
    //         } 
    //     }
    // }
    // cout << count << endl;

    // optimal
    int count=0, x=0;
    map<int, int> xorCount;
    xorCount[0] = 1;
    for (int i=0; i<n; i++){
        x ^= arr[i];
        count += xorCount[x^k];
        xorCount[x]++;
    }
    cout << count << endl;
    
    return 0;
}