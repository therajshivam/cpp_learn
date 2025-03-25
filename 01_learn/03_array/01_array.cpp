#include <iostream>
using namespace std;

int main() {
// ARRAY INITIALISATION

    // int marks[100];
    // double price[65];

    int marks[5] = {99, 100, 54, 33, 88};
    // double price[] = {98.99, 105.67, 30.00};

// ACCESSING ARRAY
    // indexes
    marks[0] = 101; // changing value of indexes
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // 0 to size-1 => array index limit                                       

// LOOPS ON ARRAY
    // 0 to size-1
    int size = 5;

    // calculate size of array
    int sz = sizeof(marks)/sizeof(int);

    // loop for printing output
    for(int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    // loop to take input inside array
    int newSize = 5;
    int newArr[newSize];
    // input
    for(int i = 0; i < newSize; i++) {
        cin >> marks[i];
    }
    // output
    for(int i = 0; i < newSize; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
