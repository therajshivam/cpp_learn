// Prime or not 

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value" << endl;
    cin>>n;

    int i = 2;

    while(i<n) {

        if(n%i==0) {
            cout << "This is Not-Prime for " << i <<endl;
        }
        else{
            cout<< "This is Prime for "<< i << endl;
        }
        i=i+1;
    }


}