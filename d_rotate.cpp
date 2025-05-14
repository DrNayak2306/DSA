#include<bits/stdc++.h>

using namespace std;

void rev(vector<int> &arr, int start, int end){
    int l = start, r = end;
    while (l < r){
        int temp = arr[r];
        arr[r] = arr[l];
        arr[l] = temp;
        l++;
        r--;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "d\n";
    int d;
    cin >> d;
    rev(arr, 0, arr.size()-1);
    rev(arr, 0, d-1);
    rev(arr, d, arr.size()-1);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}