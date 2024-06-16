#include<iostream>
using namespace std;

int pow(int num1, int num2){

    int ans = 1;
    for (int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }
    return ans;
}

int main(){
    int a, b;
    cin >> a >> b ;

    int solution = pow(a,b);
    cout<<solution<<endl;

    return 0;
}