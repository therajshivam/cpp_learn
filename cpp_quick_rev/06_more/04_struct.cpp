// struct
// A structure that group related variables under one name
// strucs can contain many diff datatypes (string, int , double, bool, etc.)
// variables in a struct are known as "members"
// members can be access with . "Class Member Access Operator"

#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled = true;
};

int main () {

    student student1;
    student1.name = "spongebob";
    student1.gpa = 3.2;
    // student1.enrolled = true;

    student student2;
    student2.name = "patric";
    student2.gpa = 2.1;
    // student2.enrolled = true;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    return 0;
}
