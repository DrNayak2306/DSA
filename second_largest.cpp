#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int first, second;

    // // better solution
    // first = second = -1;
    // for (int i=0; i<n; i++){
    //     if (arr[i] > second){
    //         second = arr[i];
    //     }
    //     if (second > first){
    //         int temp = first;
    //         first = second;
    //         second = temp;
    //     }
    // }
    
    // optimal solution
    first = second = -1;
    for (int i=0; i<n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second){
            second = arr[i];
        }
    }

    cout << second << endl;
    return 0;
}