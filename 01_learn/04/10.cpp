// pointers : variables that stores a memory address of another variable
//            sometimes its easier to work with an address

// & : address-of operator
// * : dereference operator


#include<iostream>
using namespace std;

int main(){

    string name = "Bro";
    string *pName = &name;

    cout << pName << '\n'; // display pointer
    cout << *pName << '\n'; // display value at this address

    int age = 21;
    int *pAge = &age;

    cout << *pAge << '\n';

    string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3","Pizza4", "Pizza5",};
    string *pFreePizzas = freePizzas;
    cout << *pFreePizzas << '\n';


    return 0;
}