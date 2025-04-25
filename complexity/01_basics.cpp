// Time Complexity :
// The rate at which the time taken increases wrt the input size

// Rules
// -> TC to be calculated in worst case scenario
// -> Avoid constants
// -> Avoid lower values

// Big-Oh Notation to calculate time complexity -> O(N) ; N -> Time Taken

// Best case / Worst case / Average case

#include<iostream>
using namespace std;

int main() {

    int n;
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++)
        {
            // Block of code
        }
    } // O(N^2) Time complexity

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j <=i; j++)
        {
            // Block of code
        }
    } // O(N^2) Time complexity

    

    return 0;
}