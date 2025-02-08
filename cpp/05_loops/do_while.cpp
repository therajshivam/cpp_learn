#include<iostream>
#include<string>
using namespace std;

int main () {

   string response;

   do {
    cout << " Do u want more tea? (yes/no) : \n";
    getline(cin, response);
   } while (response != "no" || response != "No"); 
}