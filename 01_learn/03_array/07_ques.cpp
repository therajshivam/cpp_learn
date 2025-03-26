// WAF to swap the max and min number of an array.

#include<iostream>
#include <climits>
using namespace std;

// int minNum(int arr[], int size) {
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         smallest = min(arr[i], smallest);
//     }
//     return smallest;
// }

// int maxNum(int arr[], int size) {
//     int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         largest = max(arr[i], largest);
//     }
//     return largest;
// }

void swapMinMax(int arr[], int size) {

    int minIdx = -1, maxIdx = -1;
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    if (minIdx != -1 && maxIdx != -1)
    {
        swap(arr[minIdx], arr[maxIdx]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
     int arr[] = {0, 1, 2, 3, 4, 5};
     int size = sizeof(arr)/sizeof(arr[0]);

     cout << "Original Array is:  ";
     printArray(arr, size);

     swapMinMax(arr, size);

     cout << "Array after swapping min and max: ";
     printArray(arr, size);
     
    return 0;
}