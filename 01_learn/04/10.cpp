// pointers : variables that stores a memory address of another variable
//            sometimes its easier to work with an address

// & : address-of operator
// * : dereference operator


#include<iostream>
using namespace std;

int main(){

    string name = "Bro";
    string *pName = &name;

    cout << pName << '\n'; // 

    return 0;
}