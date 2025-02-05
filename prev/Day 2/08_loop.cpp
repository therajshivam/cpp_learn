// F to c

#include<iostream>
using namespace std;

int main() {

    float F;
    cout<< "Enter temperature in Fahrenheit : " << endl;
    cin>>F;

    float C = (5.0/9) * (F-32);

    cout << F << " F = " << C << " C"<< endl;

}