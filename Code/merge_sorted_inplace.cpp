#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<int> arr1(m), arr2(n);
    for (int i=0; i<m; i++){
        cin >> arr1[i];
    }
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }

    // optimal 1
    // for (int i=m-1, j=0; i>=0 && j<=n-1; i--, j++){
    //     if (arr1[i] > arr2[j]){
    //         swap(arr1[i], arr2[j]);
    //     }
    // }
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // for (int i=0; i<m; i++){
    //     cout << arr1[i] << " ";
    // }
    // for (int j=0; j<n; j++){
    //     cout << arr2[j] << " ";
    // }
    // cout << endl;

    // optimal 2
    int gap = (m+n)/2 + (m+n)%2;
    while (true){
        int i = 0, j = gap;
        // both pointers in first array
        while (j < m){
            if (arr1[i] > arr1[j]){
                swap(arr1[i], arr1[j]);
            }
            i++; j++;
        }
        j %= m;
        // i in arr1, j in arr2
        while (i < m && j < n){
            if (arr1[i] > arr2[j]){
                swap(arr1[i], arr2[j]);
            }
            i++; j++;
        }
        i = 0;
        // both pointers in second array
        while (j < n){
            if (arr2[i] > arr2[j]){
                swap(arr2[i], arr2[j]);
            }
            i++; j++;
        }
        if (gap == 1) break;
        gap = gap/2 + gap%2;
    }

    for (int i=0; i<m; i++){
        cout << arr1[i] << " ";
    }
    for (int i=0; i<n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}