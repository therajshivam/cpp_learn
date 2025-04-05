// memory allocation
// pointers
// pointer addition
// double pointers (pointer to pointer)
// null pointer
// array and pointers
// passing pointers to function


// SYNTAX : 
// datatype *pointer_name;

//  &x → Address of x
//  ptr → Stores address of x
//  *ptr → Dereferencing (value at address stored in ptr)

// Declaring and Initializing a Pointer
#include <iostream>
using namespace std;

int main() {
    int x = 10;   // Normal variable
    int *ptr = &x; // Pointer storing address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl; // Dereferencing

    return 0;
}

