// Given an array arr[] of n elements, write a function to search a given element x in arr[].

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {5, 20, -10, 87, 9, 8, 2, 0, 99, 100};

    int key;
    cout<<"enter the kye: " << endl;
    cin>>key;

    bool found = search(arr, 10, key);

    if (found) {
        cout << "key is present " << endl;
    } else {
        cout << "key is absent" << endl;
    }
}