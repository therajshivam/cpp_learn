#include<iostream>
using namespace std;

int main() {

    // declaring
    int num[15];

    // accessing an array
    cout << "val at 14 index is " << num[14] << endl;

    // initializing an array
    int second[3] = {5, 7, 12};
    // accessing an array
    cout << "val at 2 index is " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    cout<<"printing the array" << endl;
    // printing the array
    for (int i = 0; i < n; i++) {
        cout<<third[i]<<" ";
    }

    cout<<endl;

    int fourth[5] = {0};

    int n1 = 5;
    cout<<"printing the fourth array" << endl;
    // printing the fourth array
    for (int i = 0; i < n1; i++) {
        cout<<fourth[i]<<" ";
    }
    
    cout << endl;

    int fifth[5];
    fill_n(fifth, 5, 1);

    int n2 = 5;
    cout<<"printing the fifth array" << endl;
    // printing the fifth array
    for (int i = 0; i < n2; i++) {
        cout<<fifth[i]<<" ";
    }

}