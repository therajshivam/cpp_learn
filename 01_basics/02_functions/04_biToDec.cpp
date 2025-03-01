// Binary to Decimal number

#include <iostream>
using namespace std;

int biToDec(int biNum){
   int ans = 0, power = 1; 

   while (biNum > 0) {
    int rem = biNum % 10;
    ans += (rem * power);

    biNum /= 10;
    power *= 2;
   }
   return ans;
}

int main(){
    int num;
    cout << "Enter Binary Number: ";
    cin >> num;

    cout << "Decimal Number of " << num << " is "  << biToDec(num) << endl;
    return 0;
}