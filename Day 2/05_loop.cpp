// print 1 to N

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter value:" << endl;
    cin>>n;

    int i = 1;
    
    while(i<=n){
        cout<< i << " ";
        i=i+1;
    }
}