#include<iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 7;

    // bitwise operators
    cout << "a&b " << (a&b) << endl;
    cout << "a|b " << (a|b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a^b) << endl;
    
    // left shift and right shift operators
    cout << (6<<1) << endl;
    cout << (6<<2) << endl;
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
}
