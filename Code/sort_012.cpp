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
    // sort(arr.begin(), arr.end());

    // better
    // int cnt0(0), cnt1(0), cnt2(0);
    // for (int i=0; i<arr.size(); i++){
    //     if (arr[i] == 0) cnt0++;
    //     else if (arr[i] == 1) cnt1++;
    //     else cnt2++;
    // }
    // for (int i=0; i<cnt0; i++) arr[i] = 0;
    // for (int i=cnt0; i<cnt0+cnt1; i++) arr[i] = 1;
    // for (int i=cnt0+cnt1; i<n; i++) arr[i] = 2;

    // optimal
    int low(0), mid(0), high(n-1);
    while (mid <= high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else if (arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}