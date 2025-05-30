// pointers

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // pointers
    int x = 4;
    int *p_x = &x;
    cout << "Addr x: " << &x << endl;
    cout << "Val p_x: " << p_x << endl;
    cout << "val *p_x: " << *p_x << endl;

    *p_x = 5;
    cout << "x: " << x << endl;
    // pointer addition
    cout << "Addr p_x: " << p_x << endl;
    cout << "Addr p_x + 1: " << p_x + 1<< endl;
    
    // double pointers
    int **p_p_x = &p_x;
    cout << "Addr p_x: " << &p_x << endl;
    cout << "Val p_p_x: " << p_p_x << endl;
    cout << "val *p_p_x: " << *p_p_x << endl;
    cout << "val **p_p_x: " << **p_p_x << endl;

    **p_p_x = 7;
    cout << "x: " << x << endl;
    






    return 0;
}