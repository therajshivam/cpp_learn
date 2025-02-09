// lamda function : functions who dont hv any name
// use in frameworks and libraries

// Pass by value and Pass by reference

#include<iostream>
using namespace std;




int main () {

    // lamda
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai (5);

    return 0;
}