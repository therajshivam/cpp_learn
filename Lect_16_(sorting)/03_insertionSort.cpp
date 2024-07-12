#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i -1;
        while (j>=0) {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            } else {
                break;
            } 
            j--;
        }
        arr[j+1] = temp;
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

    insertion_sort(arr, 7);
    printArray(arr, 7);
    return 0;

}