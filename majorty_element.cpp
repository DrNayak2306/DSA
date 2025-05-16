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
    // for (int i=0; i<n; i++){
    //     int cnt = 0;
    //     for (int j=i; j<n; j++){
    //         if (arr[j] == arr[i]) cnt++;
    //     }
    //     if (cnt > n/2){
    //         cout << arr[i] << endl;
    //         return 0;
    //     }
    // }

    // better
    // map<int, int> mpp;
    // for (int i=0; i<n; i++) mpp[arr[i]]++;
    // for (auto i: mpp){
    //     if (i.second > n/2){
    //         cout << i.first << endl;
    //         return 0;
    //     }
    // }

    // optimal
    int maj(0), cnt(0);
    for (int i=0; i<n; i++){
        if (cnt == 0){
            maj = i;
            cnt = 1;
        }
        else if (arr[i] == arr[maj]){
            cnt++;
        }
        else cnt--;
    }
    if (cnt > n/2){
        cout << arr[maj] << endl;
        return 0;
    }
    cout << "None" << endl;
    return 0;
}