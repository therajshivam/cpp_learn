// Search

#include<iostream>
using namespace std;

int searchArr(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        } 
    }
    return -1;
}

int main(){

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(num)/sizeof(num[0]);
    int index;
    int myNum;

    cout << "Enter element to search for: " << endl;
    cin >> myNum;

    index = searchArr(num, size, myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index;
    } else {
        cout << myNum << " is not in the array";
    }
    

    return 0;
}