// WAF to calculate sum and product of all nums in an array.

#include<iostream>
using namespace std;

int sumArr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; 
    }
    return sum;
}

int productArr(int arr[], int size){
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main(){

    int arr[]={5, 8, 7, 6, 7, 6, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = sumArr(arr, size);
    int product = productArr(arr, size);

    cout << "sum of all elements of the array: " << sum <<endl;

    cout << "product of all elements of the array: " << product << endl;
    // product(arr, size);

    return 0;
}