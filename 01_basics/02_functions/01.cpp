// calculate sum of digits of a number

// - num % 10 => remainder => last digit (get the remainder as digit)
// - num = num / 10 => removes the last digit

#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int digiSum = 0; 
    
    while(n > 0){
        int lastDigi = n % 10;
        n /= 10;
        digiSum += lastDigi;
    }
     return digiSum;
}

int main(){
    int n;
    cout << "Enter Num: ";
    cin >> n;

    int sum = sumOfDigits(n);

    cout << "Sum of Digits: " << sum << endl;
}