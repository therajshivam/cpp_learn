#include<iostream>
using namespace std;

int main() {
    bool isStudent;
    int cups;

    cout << "are u a student (1 for yes and 0 for no) ?" << endl;
    cin >> isStudent;

    cout << "How many cups have u purchased?" << endl;
    cin >> cups;

    if (isStudent || cups >= 15) {
        cout << "u are eligible for discount" << endl;
    } else {
        cout << "u are not eligible for discount" << endl;
    }
    
    return 0;
}