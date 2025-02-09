// declaring and printing an array

#include<iostream>
using namespace std;

int main () {
    int chaiTemperature[5] = {85, 90, 88, 92, 89};

    cout << "Chai temperatures: ";
    for(int i = 0; i<5; i++) {
        cout << chaiTemperature[i] << " deg Celcius \n";
    }

    return 0;
}