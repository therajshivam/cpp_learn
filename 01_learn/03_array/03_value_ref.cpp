// PASS BY VALUE
//  - creates a copy
//  - changes made inside the function do not affect he original variable
//  - used when dont wnt to modify he original val

// #include<iostream>
// using namespace std;

// void modify(int num);

// int main(){
//     int num = 10;
//     cout << "before mod: " << num << endl;
//     modify(num);
//     cout << "after mod: " << num << endl;
//     return 0;
// }

// void modify(int num){
//     num = 20;
//     cout << "inside mod func: " << num << endl;
// }





// PASS BY REFERENCE
//  - function receives to tje original variable
//  - changes inside the function affect the original variable
//  - used when want to modify the original value or avoid unneecessary coping (for efficiency)

#include<iostream>
using namespace std;

void modify(int &num);

int main() {
    int num = 10;
    cout << "before mod: " << num << endl;
    modify(num);
    cout << "after mod: " << num << endl;
}

void modify(int &num) {
    num = 20;
    cout << "inside mod func: " << num << endl;
}