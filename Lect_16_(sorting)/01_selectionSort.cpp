#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {

    for (int i = 0; i < n-1 ; i++) {
        int minIndex = i;

        for (int j = i+1 ; j < n; j++) {
            
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);                
    }
}

void printArray(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = { 64, 25, 12, 22, 11 };

    selection_sort(arr, 5);
    printArray(arr, 5);
    return 0;

}