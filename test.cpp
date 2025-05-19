#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> vec2 = {{1,2,3},{1,0,3},{4,4,4}};
    sort(vec2.begin(), vec2.end());
    for (auto i: vec2){
        for (auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}