#include<iostream>
using namespace std;

bool isEven(int a) {

    // odd
    if(a&1) {
        return 0;
    }

    // even
    return 1;
}

int main() {

    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"Number is Even" << endl;
    }
    else{
        cout<< "Number is Odd" <<endl;
    }

    return 0;
}