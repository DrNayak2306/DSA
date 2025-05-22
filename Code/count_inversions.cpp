#include<bits/stdc++.h>

using namespace std;

long countInversions(vector<int> &arr, int start, int end){
    if (start >= end) return 0;
    int mid = (start+end)/2;
    long left_count = countInversions(arr, start, mid);
    long right_count = countInversions(arr, mid+1, end);
    long cross_count = 0;
    vector<int> temp(end-start+1);
    int i = start, j = mid+1, k = 0;
    while (i <= mid && j <= end){
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else {
            cross_count += mid-i+1;
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i=start; i<=end; i++){
        arr[i] = temp[i-start];
    }
    return left_count + cross_count + right_count;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // brute-force
    // int cnt = 0;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         if (arr[i] > arr[j]){
    //             cnt++;
    //         }
    //     }
    // }
    // cout << cnt << endl;

    // optimal
    cout << countInversions(arr, 0, n-1) << endl;
    
    return 0;
}