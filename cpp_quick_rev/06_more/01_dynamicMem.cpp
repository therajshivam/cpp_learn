// Dynamic Memory
// Memory that is allocated after the program is already compiled or running.
// use the 'new' operator to allocate memory in the heap rather than the stack.

// Useful when we dont know how much memory we will need.
// Makes our programs more flexible, especially when accepting user input.


#include <iostream>

using namespace std;

int main() {

    // int *pNum = NULL;

    // pNum = new int;

    // *pNum = 21;

    // cout << "address " << pNum << '\n';
    // cout << "value " << *pNum << '\n';

    // delete pNum;

    char *pGrades = NULL;
    int size;

    cout<< "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}