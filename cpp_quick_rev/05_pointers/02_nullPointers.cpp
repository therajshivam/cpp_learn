// Null value = a special value that means something has no value.
//              when a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// nullptr = keyword that represents a null pointer literal

// nullptr are helpful when determining if an address
// was successfully assigned to a pointer

// when using pointers, be careful that ur code isnt
// deferencing nullptr or pointing to free memory
// this will cause undefined behavior


#include <iostream>
using namespace std;

int main () {

    int *pointer = nullptr;
    int x =123; 

    pointer = &x;

    if (pointer == nullptr){
        cout << "address was not assigned\n" ;
    } else {
        cout << "address was assigned\n" ;
        cout << *pointer;
    }
    
    return 0;
}
