// Reverse an array
// 2 pointer approach
// swap(start, end )
// O(N)

#include <iostream>
using namespace std;

void revArr(int arr[], int size);
void printArr(int arr[], int size);

int main(){

    int arr[] = {5, 9, 10, 8, 2, 1, 7, 0};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    printArr(arr, size);

    revArr(arr, size);

    cout << "Reversed Array: ";
    printArr(arr, size);

    return 0;
}   

void revArr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    
    while (start < end)         
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
void printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}