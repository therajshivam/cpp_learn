#include<iostream>
#include<string>

using namespace std;

int main() {

    // string teaOne = "green tea";
    // string teaTwo = "lemon tea";
    // list or array

    string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for (int i = 0; i < 3; i++) { 
        cout << "Brewing " << teaTypes[i] << " ..." << endl;
    }
    
 
    return 0;
}