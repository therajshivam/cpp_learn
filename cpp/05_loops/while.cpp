#include<iostream>

using namespace std;

int main () {
     int teaCups;

    cout << "No. of cups to serve: \n";
    cin >> teaCups;

    while (teaCups > 0 ) {
        cout << "Serving a cup of tea " << teaCups << " remaining" << endl;
        teaCups--;
    }
    
    cout << "All tea cups are served. \n";
    return 0;
}