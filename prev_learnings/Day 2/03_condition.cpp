// +ve, -ve , 0

#include <iostream>
using namespace std;

int main()
{

    int a;

    cout << "Enter the value of A : " << endl;
    cin >> a;

    // nested if-else

    /*
    if(a>0) {
        cout << "A is positive" << endl;
    }
    else {
        if(a<0) {
            cout << "A is negative" << endl;
        }
        else{
            cout << "A is zero" << endl;
        }
    }
    */

    // else-if

    if (a > 0)
    {
        cout << "A is positive" << endl;
    }
    else if (a < 0)
    {
        cout << "A is negative" << endl;
    }
    else
    {
        cout << "A is zero" << endl;
    }
}