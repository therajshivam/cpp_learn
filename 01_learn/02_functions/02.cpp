// calculate nCr binomial coeff for n & r
// - nCr = n! / r! (n-r)!


#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int factOfN = factorial(n);
    int factOfR = factorial(r);
    int factOfNmR = factorial(n-r);

    return factOfN / (factOfR * factOfNmR);
}

int main(){
    int n, r;
    cout << "Program for calculating of nCr \n";
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    int nCrCalc = nCr(n,r);

    cout << "Value of nCr: " << nCrCalc << endl;
}