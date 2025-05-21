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
    // set<vector<int>> res;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         for (int k=j+1; k<n; k++){
    //             if (arr[i]+arr[j]+arr[k] == 0){
    //                 vector<int> temp = {arr[i], arr[j], arr[k]};
    //                 sort(temp.begin(), temp.end());
    //                 res.insert(temp);
    //             }
    //         }
    //     }
    // }

    // better
    // for (int i=0; i<n; i++){
    //     set<int> lookup;
    //     for (int j=i+1; j<n; j++){
    //         int third = -(arr[i]+arr[j]);
    //         if (lookup.find(third) != lookup.end()){
    //             vector<int> temp = {arr[i], arr[j], third};
    //             sort(temp.begin(), temp.end());
    //             res.insert(temp);
    //         }
    //         lookup.insert(arr[j]);
    //     }
    // }

    // optimal
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());
    for (int first = 0; first < n; first++){
        while (first > 0 && arr[first] == arr[first-1]) first++;
        int second = first+1, third = n-1;
        while (second < third){
            long sum = arr[second]+arr[third];
            if (sum == -arr[first]){
                res.push_back({arr[first], arr[second], arr[third]});
                second++;
                third--;
                while (second < n && arr[second] == arr[second-1]) second++;
                while (third > first && arr[third] == arr[third+1]) third--;
            }
            else if (sum < -arr[first]) second++;
            else third--;
        }
    }
    for (auto i: res){
        for (int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}