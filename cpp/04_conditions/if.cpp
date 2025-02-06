#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaOrder;

    cout << "Make an order: "<<endl;
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea") {
        cout << "u hv ordered a green tea. thank you! \n";
    }
}