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
    // vector<int> res;
    // bool flag;
    // for (int i=0; i<n-1; i++){
    //     flag = true;
    //     for (int j=i+1; j<n; j++){
    //         if (arr[i] < arr[j]){
    //             flag = false;
    //         }
    //     }
    //     if (flag){
    //         res.push_back(arr[i]);
    //     }
    // }
    // res.push_back(arr[n-1]);

    // optimal
    list<int> res = {arr[n-1]};
    for (int i=n-2; i>=0; i--){
        if (arr[i] > res.front()){
            res.push_front(arr[i]);
        }
    }
    for (auto i: res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}