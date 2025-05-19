#include<bits/stdc++.h>

using namespace std;
typedef struct node node;
struct node{
    int val;
    node *next;  
};

int main(){
    node *map[10];
    for (int i=0; i<10; i++){
        map[i] = (node*)malloc(sizeof(node));
        map[i]->next = NULL;
    }
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        node *temp = (node*)malloc(sizeof(node));
        cin >> temp->val;
        node *it = map[(temp->val) % 10];
        while (it->next && it->next->val < temp->val){
            it = it->next;
        }
        temp->next = it->next;
        it->next = temp;
    }
    // display map
    for (int i=0; i<10; i++){
        cout << i << ": ";
        for (node *it = map[i]->next; it; it=it->next){
            cout << it->val << ", ";
        }
        cout << "\n";
    }
    return 0;
}