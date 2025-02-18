// sizeof() = determines the size in bytes of a:
//            variables, data type, class, object, etc


#include <iostream>
using namespace std;

int main() {

    double gpa = 2.5;
    cout << sizeof(gpa) << " bytes\n";

    string name = "Bro";
    cout << sizeof(name) << " bytes\n";
    
    char grade = 'F';
    cout << sizeof(grade) << " bytes\n";

    bool student = true;
    cout << sizeof(student) << " bytes\n";


    

    // how to calculate size of an array


    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    cout << sizeof(grades) << " bytes\n";
    // calculate size of an array
    cout << sizeof(grades)/sizeof(char) << " elements\n";

    string students[] = {"ABC", "BCD", "CDE", "DEF"};
    cout << sizeof(students) << " bytes\n";
    cout << sizeof(students)/sizeof(string) << " elements\n";




    return 0;
}