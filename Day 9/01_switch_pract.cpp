#include<iostream>
using namespace std;

int main() {

    int ch ='1';
    int num = 1;

    switch(ch) {

        case 1: cout << "First" << endl;
        // break;

        case '1': switch (num) {
            case 1: cout << " the value of num is " << num << endl;
        } 
        break;

        default: cout << "It is default case" << endl;
    }
}