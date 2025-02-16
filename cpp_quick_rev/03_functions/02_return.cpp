#include <iostream>
using namespace std;


// double square (double length);
// double cube (double length);

// int main(){

//     // return = reurn a value back to the spot; where u called the encompassing function

//     double length = 6.0;
//     double area = square (length);
//     double volume = cube (length);

//     cout << "Area: " << area << "cm^2\n";
//     cout << "Volume: " << volume << "cm^3\n";


//     return 0;
// }

// double square (double length) {
//     double result = length * length;
//     return result;
// }

// double cube (double length) {
//     return length * length * length;
// }




string concatStrings(string string1, string string2);

int main () {

    string firstName = "Hello";
    string lastName = "Brother";

    string fullName = concatStrings (firstName, lastName);
    cout << fullName;

    return 0;
}

string concatStrings(string string1, string string2) {
    return string1 + " " + string2;
}
