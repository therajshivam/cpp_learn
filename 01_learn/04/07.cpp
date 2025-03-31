// user input

#include <iostream>
using namespace std;

int main() {

    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a food you like #" << i+1 << ": ";
        getline(cin, temp);
        if (temp == "q")
        {
            break;
        } else
        {
            foods[i] = temp;
        }
        
        
    }

    cout << "You like the following food items:\n";

    for (int i = 0; !foods[i].empty(); i++)
    {
        cout << i + 1 << ". " << foods[i] << '\n';
    }
    

    return 0;
}