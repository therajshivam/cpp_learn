// Containers
// 1. Vectors : dynamic array.
// It automatically resizes itself when elements are added or removed.


#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v; // declaration 
    // this creates an empty container

    v.push_back(1);
    v.emplace_back(2);

    // vector of pair data type
    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2); // adding elements
    // emplace_back is generally faster than push_back
 
    // container containing 5 instances of 100 with is already defined.
    vector<int> v(5, 100);

    // container of size 5 with 5 instances of 0 or any garbage value
    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    return 0;

    
}