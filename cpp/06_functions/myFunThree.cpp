// Pass by reference : making changing in original value
// & sign is used

#include<iostream>
using namespace std;

void pourChai (int &cups) {
    cups = cups + 5;
    cout << " poured cups: " << cups << endl;
}


int main () {

    int cups = 2;
    pourChai(cups);
    cout << "total cups: " << cups << endl;
    return 0;
}