#include<iostream>
#include<string>

using namespace std;

int main() {

    string response;

    while (true) {
        cout << "do u want more tea (type 'stop' to exit)?: ";
        getline(cin, response);

        if (response == "stop") {
            break; // exit the loop
        }

        cout << "Here is your another cup of tea.";
    }
    cout << "No more tea will be served";

    return 0;
}