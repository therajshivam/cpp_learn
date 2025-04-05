// Passing Pointers to Functions

#include <iostream>
using namespace std;

void update(int *ptr) {
    *ptr = 20; // Modify the value
}

int main() {
    int x = 10;
    update(&x); // Pass address of x
    cout << "Updated x: " << x << endl; // 20

    return 0;
}
