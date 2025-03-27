#include<iostream>
using namespace std;

int main(){
    
    // sizeof() operator

    double gpa = 2.5;
    cout << sizeof(gpa) << " bytes\n";

    string name = "bro";
    cout << sizeof(name) << " bytes\n";

    char grade = 'F';
    cout << sizeof(grade) << " bytes\n";

    char grades[] = {'A', 'B', 'C'};
    cout << sizeof(grades)/sizeof(grades[0])<< " bytes\n";
    cout << sizeof(grades)/sizeof(char)<< " bytes\n";
}