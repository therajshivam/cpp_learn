#include<iostream>
using namespace std;

// return 0 -> not prime
// return 1 -> prime
bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if ( n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cout<< "enter a number : " << endl;
    cin>>n;
    if (isPrime(n)) {
        cout<< n << " is a prime number" <<endl;
    } else {
        cout<< n << " is not a prime number" <<endl;   
    }   
}