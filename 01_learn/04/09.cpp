// memory address
// location in memory where data is stored
// & = address of operator
// memory address can accessed with &

#include<iostream>
using namespace std;

int main(){

    string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}