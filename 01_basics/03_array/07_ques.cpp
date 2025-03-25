// WAF to swap the max and min number of an array.

#include<iostream>
#include <climits>
using namespace std;

int minNum(int arr[], int size) {
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
    }
    return smallest;
}

int maxNum(int arr[], int size) {
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
    }
    return largest;
}



int main(){
     int arr[] = {0, 1, 2, 3, 4, 5};
     int size = sizeof(arr)/sizeof(arr[0]);

     cout << "Array is:  ";
     for (int i = 0; i < size; i++)
     {
        cout << arr[i] << " ";
     }
     cout << endl;
     
     cout << "Smallest Element: " << minNum(arr, size) << endl;
     cout << "Largest Element: " << maxNum(arr, size) << endl;

    return 0;
}