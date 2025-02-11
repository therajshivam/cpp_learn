#include <iostream>
using namespace std;

int main () {

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    double radius = 10;
    double circum = 2 * PI * radius;

    cout << circum << " cm";


    return 0;
}