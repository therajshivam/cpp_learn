#include <iostream>
using namespace std;

int main () {
    int hour;
    cout << "Enter the current time (between 00hr to 23hr) : " << endl;
    cin >> hour;

    if(hour >= 8 && hour <= 18) {
        cout<<"shop is open \n";
    } else {
        cout<<"shop is closed \n";
    }
}