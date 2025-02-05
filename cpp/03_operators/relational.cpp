#include<iostream>
using namespace std;

int main() {
    int cups;

    cout << "Enter the numbers of cups you have: ";
    cin >> cups;

    if (cups > 20){
        cout << "You will get a gold badge" << endl;
    } else if (cups >= 10 && cups <= 20) {
        cout << "You will get a silver badge" << endl;
    } else {
        cout << "No badge for you" << endl;
    }
    
    return 0;
}