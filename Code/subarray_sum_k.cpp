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

    // common variables
    int max_len(0);

    // brute-force
    // long long sum;
    // for (int i=0; i<n; i++){
    //     for (int j=i; j<n; j++){
    //         sum = 0;
    //         for (int k=i; k<=j; k++){
    //             sum += arr[i];
    //         }
    //         if (sum == k){
    //             max_len = max(max_len, j-i+1);
    //         }
    //     }
    // }

    // better
    // map<long long, int> prefix_sum = {{0,-1}};
    // long long sum(0);
    // for (int i=0; i<arr.size(); i++){
    //     sum += arr[i];
    //     long long rem = sum-k;
    //     if (prefix_sum.find(rem) != prefix_sum.end()){
    //         int len = i-prefix_sum[rem];
    //         max_len = max(max_len, len);
    //     }
    //     if (prefix_sum.find(sum) == prefix_sum.end()){
    //         prefix_sum.emplace(sum, i);
    //     }
    // }

    // optimal
    int left(0), right(0);
    long long sum(0);
    while (right < arr.size()){
        sum += arr[right];
        while (left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if (sum == k){
            max_len = max(max_len, right-left+1);
        }
        right++;
    }

    // common output
    cout << max_len << endl;

    return 0;
}