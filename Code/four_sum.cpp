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
    // set<vector<int>> res;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         for (int k=j+1; k<n; k++){
    //             for (int l=k+1; l<n; l++){
    //                 long sum = arr[i]+arr[j]+arr[k]+arr[l];
    //                 if (sum == 0){
    //                     vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
    //                     sort(temp.begin(), temp.end());
    //                     res.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }

    // better
    // set<vector<int>> res;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         set<int> lookup;
    //         for (int k=j+1; k<n; k++){
    //             int sum = arr[i]+arr[j]+arr[k];
    //             if (lookup.find(-sum) != lookup.end()){
    //                 vector<int> temp = {arr[i],arr[j],arr[k],-sum};
    //                 sort(temp.begin(), temp.end());
    //                 res.insert(temp);
    //             }
    //             lookup.insert(arr[k]);
    //         }
    //     }
    // }

    // optimal
    vector<vector<int>> res; // result array

    sort(arr.begin(), arr.end()); // preprocessing for 2 pointer setup
    for (int i=0; i<n; i++){
        while (i>0 && i<n && arr[i]==arr[i-1]) i++; // skip duplicates
        for (int j=i+1; j<n; j++){
            while (j>i+1 && j<n && arr[j]==arr[j-1]) j++; // skip duplicates
            long target = -(arr[i]+arr[j]);
            int left = j+1, right = n-1;
            long sum;
            while (left < right){
                sum = arr[left] + arr[right];
                if (sum == target){
                    res.push_back({arr[i], arr[j], arr[left], arr[right]});
                    left++;
                    right--;
                    // skip duplicates
                    while (left<right && arr[left]==arr[left-1]) left++;
                    while (left<right && arr[right]==arr[right+1]) right--;
                }
                else if (sum < target) left++;
                else right--;
            }
        }
    }
    for (auto vec: res){
        for (int i: vec){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}