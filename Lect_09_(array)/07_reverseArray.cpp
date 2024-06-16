#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++ ;
        end--;
    } 
}

void printArray(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {

    int arr1[6] = {74, 85, 96, 25, 14, 36};
    int arr2[5] = {45, 65, 8, 78, 32};

    reverse(arr1, 6);
    reverse(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
}


// another method
/*
int main() {
   int arr[6] = {1, 2, 3, 4, 5, 6};
   
   for(int i = 5; i >= 0; i--) {
       cout<<arr[i] << " ";  
   } 
   cout << endl;
}
*/
