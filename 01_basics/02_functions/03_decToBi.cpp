// Decimal to binary number

#include <iostream>
using namespace std;

int decToBi(int decNum){
   int ans = 0, power = 1; 

   while (decNum > 0) {
    int rem = decNum % 2;
    decNum /= 2;

    ans += (rem * power);
    power *= 10;
   }
   return ans;
}

int main(){
    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;

    cout << "Binary Number of " << num << " is "  << decToBi(num) << endl;
    return 0;
}