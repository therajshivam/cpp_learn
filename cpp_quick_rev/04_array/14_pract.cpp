// credit card validator program


// Luhn Algorithm
// ---------------------------
// 1. Double every second digit from right to left
//    If doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 & 3
// 5. If step 4 is divisble by 10, # is valid


#include<iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigit(const string cardNumber);
int sumEvenDigit(const string cardNumber);

int main(){

    string cardNumber;
    int result = 0;

    cout << "Enter a card number #: ";
    cin >> cardNumber;

    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if(result % 10 == 0) {
        cout << cardNumber << " is valid";
    } else {
        cout << cardNumber << " is not valid";

    }
    return 0;
}


int getDigit(const int number) {


    return number % 10 + (number / 10 % 10);
}
int sumOddDigit(const string cardNumber){

    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenDigit(const string cardNumber) {

    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}