#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int start = 0;
    int end = n - 1;

    // int mid = (start + end) / 2;

    // more optimised
    int mid = start + (end - start)/2;

    while (start <= end) {
        
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {   // to go right
            start = mid + 1;
        } else {               // to go left    
            end = mid - 1;
        }

        // mid = (start + end )/ 2 ;  
        mid = start + (end - start)/2;
        
        
    }
    return -1;
}

int main() {

    int even[6] = {2, 6 , 13, 20, 25, 60} ;
    int odd[5] = {3, 7 , 9, 16, 50} ;

    int evenIndex = binarySearch(even, 6, 6);
    cout << "index is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 16);
    cout << "index is " << oddIndex << endl;
}