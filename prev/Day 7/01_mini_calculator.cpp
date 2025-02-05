#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout<<"Enter the first number : " << endl;
    cin>>a;
    cout<< "Enter the value of second number : " << endl;
    cin>>b;

    char op;
    cout<< "Enter the operation you want to perform : " << endl;
    cin>>op;

    switch( op ) {

        case '+' : cout << "Answer is : " << (a+b) << endl;
        break;

        case '-' : cout << "Answer is : " << (a-b) << endl;
        break;

        case '*' : cout << "Answer is : " << (a*b) << endl;
        break;

        case '/' : cout << "Answer is : " << (a/b) << endl;
        break;

        case '%' : cout << "Answer is : " << (a%b) << endl;
        break;

        default : cout << "Please Enter a Valid Operation" << endl;
    }

}