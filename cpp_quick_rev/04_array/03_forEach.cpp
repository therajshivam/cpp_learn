#include <iostream>
using namespace std;

int main() {

    // foreach loop = loop that eases the traversal over an iterable data set

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
    //     cout << students[i] << '\n';
    // }

    // forEach loop : better for arrays
    for(string student : students) {
        cout << student << '\n';
    }



    int grades[] = {65, 71, 81, 93};
    for(int grade : grades){
        cout << grade << '\n';
    }

    return 0;
}