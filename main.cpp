#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> res(n);
    int pos(0), neg(1);
    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            res[neg] = arr[i];
            neg+=2;
        }
        else{
            res[pos] = arr[i];
            pos+=2;
        }
    }
    for (int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}