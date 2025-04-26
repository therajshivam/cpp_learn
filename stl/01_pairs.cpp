// pairs : it is a part of utility lib



#include<bits/stdc++.h>
using namespace std;

int main() {
    
    pair<int, int> p = {1, 3}; // syntax

    cout << p.first << " " << p.second; // accessing elmts

    cout << endl;


    // nested pair
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.second << " " << q.second.first;
    cout << endl;

    // pair array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
    cout << endl;


    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}