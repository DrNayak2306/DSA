#include<bits/stdc++.h>

using namespace std;

// backtracking
void permute(map<int, bool> &mpp, int i, vector<int> &res){
    if (i == mpp.size()){
        for (int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    for (auto &it: mpp){
        if (it.second == false){
            it.second = true;
            res.emplace_back(it.first);
            permute(mpp, i+1, res);
            res.pop_back();
            it.second = false;
        }
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // brute-force
    // map<int, bool> mpp;
    // for (int i=0; i<n; i++){
    //     mpp.emplace(arr[i], false);
    // }
    // vector<int> res;
    // permute(mpp, 0, res);

    // optimal
    int ind = -1;
    for (int i=n-2; i>=0; i--){
        if (arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
    if (ind != -1){
        for (int i=n-1; i>=ind+1; i--){
            if (arr[i] > arr[ind]){
                swap(arr[i], arr[ind]);
                break;
            }
        }
    }
    reverse(arr.begin()+ind+1, arr.end());
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}