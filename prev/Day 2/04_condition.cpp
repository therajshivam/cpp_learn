// lower case , upper case and numeric

#include<iostream>
using namespace std;

int main() {

    char a;
    cout<<"Enter value: " << endl;
    cin>>a;

    if(a >= 'A' &&  a <= 'B') {
        cout<<"This is a UPPER CASE" << endl;
    }
    else if(a >= 'a' &&  a <= 'b') {
        cout<<"This is a LOWER CASE" << endl;
    }
    else if(a >= '0' &&  a <= '9') {
        cout<<"This is a NUMERIC" << endl;
    }
}