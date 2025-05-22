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
    // int repeat, missing;
    // for (int i=1; i<=n; i++){
    //     int cnt = 0;
    //     for (int j=0; j<n; j++){
    //         if (arr[j] == i) cnt++;
    //         if (cnt == 2){
    //             repeat = i;
    //             break;
    //         }
    //     }
    //     if (cnt == 0){
    //         missing = i;
    //     }
    // }
    // cout << repeat << endl;
    // cout << missing << endl;

    // better
    // vector<int> map(n+1);
    // int missing, repeat;
    // for (int i=0; i<n; i++){
    //     map[arr[i]]++;
    // }
    // for (int i=1; i<=n; i++){
    //     if (map[i] == 2){
    //         repeat = i;
    //     }
    //     else if (map[i] == 0){
    //         missing = i;
    //     }
    // }
    // cout << repeat << endl;
    // cout << missing << endl;

    // optimal 1
    // long sum_arr(0); for (int i=0; i<n; i++) sum_arr += arr[i];
    // long sum_n(0); for (int i=1; i<=n; i++) sum_n += i;
    // long rep_min_mis = sum_arr - sum_n; // repeat - miss

    // long sum_sq_arr(0); for (int i=0; i<n; i++) sum_sq_arr += arr[i]*arr[i];
    // long sum_sq_n(0); for (int i=1; i<=n; i++) sum_sq_n += i*i;
    // long rep_pls_mis = (sum_sq_arr-sum_sq_n)/rep_min_mis; // repeat + miss

    // int repeat = (rep_pls_mis+rep_min_mis)/2;
    // int miss = (rep_pls_mis-rep_min_mis)/2;

    // cout << repeat << endl;
    // cout << miss << endl;

    // optimal 2
    int XOR = 0;
    for (int i=0; i<n; i++){
        XOR ^= arr[i];
        XOR ^= (i+1);
    }

    int bit_no = 0;
    while ((XOR & (1<<bit_no)) == 0){
        bit_no++;
    }

    int xor0 = 0, xor1 = 0;
    for (int i=0; i<n; i++){
        if ((arr[i] & (1<<bit_no)) == 0) xor0 ^= arr[i];
        else xor1 ^= arr[i];
        if (((i+1) & (1<<bit_no)) == 0) xor0 ^= (i+1);
        else xor1 ^= (i+1);
    }

    int miss(xor0), repeat(xor1);
    int cnt0 = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == xor0){
            cnt0++;
            if (cnt0 == 2){
                swap(miss, repeat);
                break;
            }
        }
    }
    cout << repeat << endl;
    cout << miss << endl;
    return 0;
}