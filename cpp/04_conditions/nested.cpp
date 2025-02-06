#include <iostream>
using namespace std;

int main () {
    int cups;
    double price = 20, totalPrice, discount;
    cout << "Price of one cup of tea is Rs. 20 \n";
    cout << "Enter number of cups: \n";
    cin >> cups;
    totalPrice = cups * price;

    if (cups > 20) {
        cout << "you got 20% discount on your order \n";
        discount = 0.20;

    } else if (cups >= 10 && cups <= 20) {
        cout << "you got 10% discount on your order \n";
        discount = 0.10;
    } else {
        cout << "you dont get any discount on your order \n";
        discount = 0; 
    }

    totalPrice -= (totalPrice * discount);
    cout << "Total price after discoun is: " << endl;

    return 0;
}