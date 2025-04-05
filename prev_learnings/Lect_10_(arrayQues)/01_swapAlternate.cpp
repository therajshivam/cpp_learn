#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n) {

    for (int i = 0; i < n; i+=2) {
        if (i+1 < n) {
            swap(arr[i], arr[i+1]);
        }
    }
} 

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main() {

    int arr1[8] = {2, 3, 8, 9, 8, 7, 5, 6};
    int arr2[5] = {2, 3, 8, 9, 8};

    swapAlternate(arr1, 8);
    swapAlternate(arr2, 5);

    printArray(arr1, 8);
    printArray(arr2, 5);
}
