#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    
    for (int i = 0; i < n-1; i++) {   // for round 1 to n-1

        bool swapped = false;  // for optimisatiom
        for (int j = 0; j < n-i-1; j++) {      // process element till n-i th index

            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {      // if array is already sorted
            break;
        }  
    }
}

void printArray(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = { 64, 25, 12, 22, 11, 98, 1 };

    bubble_sort(arr, 7);
    printArray(arr, 7);
    return 0;

}