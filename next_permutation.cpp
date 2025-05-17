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
    map<int, bool> mpp;
    for (int i=0, j; i<n; i++){
        cin >> j;
        mpp.emplace(j, false);
    }
    vector<int> res;
    permute(mpp, 0, res);
    return 0;
}