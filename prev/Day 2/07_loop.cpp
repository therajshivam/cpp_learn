// Sum all even no. from 1 to n

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter value:" << endl;
    cin>>n;

    int i = 2;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<< "SUM from 1 to " << n << " is : "<< sum << endl;

}