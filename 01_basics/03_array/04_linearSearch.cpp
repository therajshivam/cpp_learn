#include <iostream>
using namespace std;

// void search(int arr[], int size, int n);


// int main(){

//     int arr[] = {5, 9, 10, 0, 16, 18, 1, 6, 8};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     int n = 100;

//     search(arr, size, n);

//     return 0;
// }                               

// void search(int arr[], int size, int n){
//     bool found = false;
    
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == n)
//         {
//             cout << n << " is found at index  " << i << endl;
//             found = true;
//             break;
//         } 
//     }

//     if (!found)
//     {
//         cout << n << " doesnt exist in the array \n";
//     }
// }




int linearSearch (int arr[], int size, int key);

int main(){

    int arr[] = {5, 9, 10, 0, 16, 18, 1, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = linearSearch(arr, size,key);

    if (result != -1)
    {
        cout << key << " found at index " << result << endl;
    } else {
        cout << key << " doesnt exist in the array" << endl;
    }

    return 0;
}

int linearSearch (int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)          
        {
            return i;
        }
    }
    return -1;
}