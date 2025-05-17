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
    list<int> posarr, negarr;
    for (int i=0; i<n; i++){
        if (arr[i] > 0) posarr.push_back(arr[i]);
        else negarr.push_back(arr[i]);
    }
    while (not posarr.empty() && not negarr.empty()){
        res.push_back(posarr.front());
        posarr.pop_front();
        res.push_back(negarr.front());
        negarr.pop_front();
    }
    while (posarr.size() > 0){
        res.push_back(posarr.front());
        posarr.pop_front();
    }
    while (negarr.size() > 0){
        res.push_back(negarr.front());
        negarr.pop_front();
    }

    // optimal
    // int pos(0), neg(1);
    // for (int i=0; i<n; i++){
    //     if (arr[i] < 0){
    //         res[neg] = arr[i];
    //         neg+=2;
    //     }
    //     else{
    //         res[pos] = arr[i];
    //         pos+=2;
    //     }
    // }
    for (int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}