// Sum 1 to n

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter value:" << endl;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout<< "SUM from 1 to " << n << " is : "<< sum << endl;

}