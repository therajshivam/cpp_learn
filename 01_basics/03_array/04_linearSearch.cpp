#include <iostream>
using namespace std;

void search(int arr[], int size, int n);


int main(){

    int arr[] = {5, 9, 10, 0, 16, 18, 1, 6, 8};

    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 100;

    search(arr, size, n);

    return 0;
}                               

void search(int arr[], int size, int n){
    bool found = false;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << n << " is found at index  " << i << endl;
            found = true;
            break;
        } 
    }

    if (!found)
    {
        cout << n << " doesnt exist in the array \n";
    }
}
