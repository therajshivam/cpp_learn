#include <iostream>
using namespace std;

int main () {

    double temp;
    char unit;

    cout << "What unit u like to convert to (F/C): ";
    cin>> unit;

    if(unit == 'F' || unit ==  'f'){
        cout << "Enter the temp in C: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "temp is: " << temp <<"F\n";

    } else if (unit == 'C' || unit ==  'c') {
        cout << "Enter the temp in F: ";
        cin >> temp;

        temp = (temp - 32) /1.8;
        cout << "temp is: " << temp <<"C\n";

    } else {
        cout << "pls enter only in C or F\n";
    }

    return 0;
}