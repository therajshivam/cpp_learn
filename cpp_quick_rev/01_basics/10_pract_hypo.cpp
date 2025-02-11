// calculate the hypotenuse of a triangle

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a;
    double b;
    double c;

    cout << "Enter the side A: " << endl;
    cin>> a;
    cout << "Enter the side B: " << endl;
    cin>> b;
   
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Length of hypotenuse is " << c << endl;


    return 0;
}