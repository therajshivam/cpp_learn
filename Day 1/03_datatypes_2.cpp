// Check the size of different Data Types

#include<iostream>
using namespace std;

int main() {

    int a = 123;
    char b = 'z';
    double d = 1.23;

    int size_int = sizeof(a) ;
    int size_char = sizeof(b) ;
    int size_double = sizeof(d) ;

    cout <<  "size of a is : " << size_int << endl;
    cout <<  "size of b is : " << size_char << endl;
    cout <<  "size of d is : " << size_double << endl;
}
