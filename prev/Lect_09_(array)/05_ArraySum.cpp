// print sum of all elements in an array

#include<iostream>
using namespace std;

int sum(int arr[], int n) {

    int sum = 0;
    // printing the sum of array
    for (int i = 0; i < n; i++) {
        // sum = sum + arr[i];
        sum += arr[i];
    }
    return sum;
}

int main() {
    
    int n;
    cout<<"Enter the size of array : " << endl;
    cin>>n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cout<<"enter elements of the array : "<<endl;
        cin >> arr[i];
    }  

    cout<<"sum = " << sum(arr, n) << endl;
}