// array = a data structure tha can hold multiple values
//         values are accessed by an index number
//         kind of like a variable that holds multiple values


#include <iostream>
using namespace std;

int main() {

    // string cars[3] = {"Corvette", "Mustang", "Camry"};
    // cars[0] = "Camaro";
    // cout << cars;


    // double prices[] = {5.00, 7.50, 9.99, 15.00};




    // Iterate over an array
    // string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
    //     cout << students[i] << '\n';
    // }



    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        cout << grades[i] << '\n';
    }
    
   

    return 0;
}