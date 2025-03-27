// For each loop

#include<iostream>
using namespace std;

int main() {

    string students[] = {"Abc", "Xyz", "Lmn", "Opq"}; 

    for(string student : students){
        cout << student << '\n';
    }
}