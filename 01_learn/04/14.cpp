// recursion
// factorial

#include<iostream>
using namespace std;

int fact(int num){
    int result = 1;
    if (num > 1)
    {
        return num * fact(num-1);
    } else
    {
        return 1;
    }
    
    
}

int main(){

    cout << fact(10);

    return 0;
}