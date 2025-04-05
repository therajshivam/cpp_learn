// 5️⃣ Null Pointer
// A null pointer is a pointer that does not point to any valid memory address

#include <iostream>
using namespace std;

int main() {
    // int *ptr; // Uninitialized pointer (BAD)
    // cout << *ptr; // Undefined behavior

    int *ptr = nullptr; // safe

    if (ptr == nullptr) {
        cout << "Pointer is NULL." << endl;
    }

    return 0;
}

// Always initialize pointers to nullptr before use.

