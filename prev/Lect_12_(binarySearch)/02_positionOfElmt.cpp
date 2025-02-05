#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){

    int start = 0 , end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == k) {
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] > k) {
            end = mid - 1;
        } else if (arr[mid] < k) {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k){

    int start = 0 , end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] > k) {
            end = mid - 1;
        } else if (arr[mid] < k) {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {

    int arr[11] = {1 , 2, 3, 3, 3, 3, 3, 6, 8, 8, 9};

    cout << "first occ of 3 is at index " << firstOcc(arr, 11, 3) << endl;
    cout << "last occ of 3 is at index " << lastOcc(arr, 11, 3) << endl;

    // pair<int, int> p;
    // p.first = firstOcc(arr, 11, 3);
    // p.second = lastOcc(arr, 11, 3);
    
} 

