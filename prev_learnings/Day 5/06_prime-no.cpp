// print if prime 

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    bool isPrime = 1;

    for(int i = 2; i<n ; i++) {

        if(n%i == 0) {
            isPrime=0;
            break;
        }
    }
    if(isPrime == 0 ){
        cout<<n<<" is not a Prime Number"<<endl;
    }
    else{
        cout<<n<<" is a Prime Number"<<endl;
    }
}