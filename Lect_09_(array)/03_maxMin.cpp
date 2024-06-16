#include<iostream>
using namespace std;

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        
        mini = min(mini, num[i]);
        // if (num[i] < mini) {
        //     mini = num[i];
        // }
    }
    return mini;
}

int getMax(int num[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        
        maxi = max(maxi, num[i]);
        // if (num[i] > maxi) {
        //     maxi = num[i];
        // }
    }
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout<<"Maximum value is " << getMax(arr, size) << endl;
    cout<<"Minimum value is " << getMin(arr, size) << endl;

    return 0;
}