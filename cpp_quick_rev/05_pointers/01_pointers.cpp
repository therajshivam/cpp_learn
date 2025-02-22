// pointers = variable that stores a memory address of another variable
//            sometimes its easier to work with an address

// & address-of operator
// * dereference operator

#include <iostream>
using namespace std;

int main () {

    string name = "Bro";
    int age = 21;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas; // bcoz array is already an address

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';

    return 0;
}