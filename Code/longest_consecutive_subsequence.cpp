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
    // int longest(1);
    // for (int i=0; i<n; i++){
    //     int cur = arr[i];
    //     int cnt = 1;
    //     while (find(arr.begin(), arr.end(), cur + 1) != arr.end()) {
    //         cur++;
    //         cnt++;
    //     }
    //     longest = max(longest, cnt);
    // }
    // cout << longest << endl;

    // better
    // int longest(1), cnt(0), last(INT_MIN);
    // sort(arr.begin(), arr.end());
    
    // for (int i=0; i<n; i++){
    //     if (arr[i] == last){
    //         continue;
    //     }
    //     else if (arr[i] == last+1){
    //         cnt++;
    //         last++;
    //     }
    //     else{
    //         longest = max(longest, cnt);
    //         cnt = 1;
    //         last = arr[i];
    //     }
    // }
    // cout << longest << endl;

    // optimal
    int longest(0);
    unordered_set<int> uniq;
    for (int i: arr){
        uniq.insert(i);
    }
    for (int i: uniq){
        if (uniq.find(i-1) == uniq.end()){
            int cnt = 0;
            int x = i;
            while (uniq.find(x) != uniq.end()){
                cnt++;
                x++;
            }
            longest = max(longest, cnt);
        }
    }
    cout << longest << endl;
    return 0;
}