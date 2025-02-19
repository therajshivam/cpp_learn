#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main () {

    string x ="Kool-Aid";
    string y ="Water";

    swap(x, y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}

void swap(string &x, string &y) {
    string temp;
    temp = x;
    x = y; 
    y = temp;
}

// pass by value : creatind a copy and passing 
// it wont change main variables
// in function, there is pass by value


// pass by reference : memory address where variable is located
// it will change original values of variables
//  prefix address-of operator (&) in function 