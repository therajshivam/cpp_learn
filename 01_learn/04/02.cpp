// Iterate over an array

#include<iostream>
using namespace std;

int main(){

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++)
    {
        cout << grades[i] << "\n";
    }
    

    string students[] = {"Abc", "Xyz", "Lmn", "Opq"}; 
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        cout << students[i] << "\n";
    }
    
}