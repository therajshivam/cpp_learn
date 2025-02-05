#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout<< "printing the array" << endl;
    for (int i = 0; i < size; i++) {
      cout<<arr[i]<<" ";  
    }
    cout<<"printing done" <<endl;
}

int main(){
    
    int newarr[15];
    int n=15;
    printArray(newarr, 15);

    int arr2[10] = {0};
    n=10;
    printArray(arr2, 10);
}