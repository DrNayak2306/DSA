#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> res;
    // brute-force
    
    // for (int i=0; i<n; i++){
    //     if (res.find(arr[i]) != res.end()){
    //         continue;
    //     }
    //     int cnt = 0;
    //     for (int j=0; j<n; j++){
    //         if (arr[j] == arr[i]){
    //             cnt++;
    //         }
    //     }
    //     if (cnt > n/3){
    //         res.emplace_back(arr[i]);
    //     }
    // }


    // better
    // unordered_map<int, int> freq;
    // for (int i=0; i<n; i++){
    //     if (res.find(arr[i]) != res.end()){
    //         continue;
    //     }

    //     freq[arr[i]]++;

    //     if (freq[arr[i]] > n/3){
    //         res.emplace_back(arr[i]);
    //     }
    // }
    

    // optimal
    int cnt1(0), cnt2(0);
    int x1, x2;
    for (int i=0; i<n; i++){
        if (cnt1 == 0 && x2 != arr[i]){
            cnt1 = 1;
            x1 = arr[i];
        }
        else if (cnt2 == 0 && x1 != arr[i]){
            cnt2 = 1;
            x2 = arr[i];
        }
        else if (arr[i] == x1) cnt1++;
        else if (arr[i] == x2) cnt2++;
        else {
            cnt1--;
            cnt2--;        
        }
    }
    cnt1 = cnt2 = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == x1) cnt1++;
        else if (arr[i] == x2) cnt2++;
    }
    if (cnt1 > n/3) res.emplace_back(x1);
    if (cnt2 > n/3) res.emplace_back(x2);
    
    sort(res.begin(), res.end());
    for (int i: res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}