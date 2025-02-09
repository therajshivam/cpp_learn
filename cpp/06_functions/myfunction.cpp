// returnType functionName (parameters) {
//     // function body
// }


#include<iostream>
#include<string>
using namespace std;

int checkTemperature (int temperature) {
    return temperature;
}

// declaration of function : it does not hv value in it
void serveChai(int cups);



void makeChai(){
    cout << "boiling water, adding tea leaves, straining..." << endl;
}

// funcion overloading : having many funcions of same name bu can be differentiatble by looking at the number of variables we are putting into its parameters
void serveChai(string teaType = "Masala Tea"){
    cout << "Serving " << teaType << endl;
}

int main () {
    int temp = checkTemperature(85);
    // cout << temp << endl;

    // makeChai(); // calling a chai
    // serveChai(3);

    serveChai();
    return 0;
}

// defination of function
void serveChai(int cups) {
    cout << "Serving " << cups << " of chai";
}
