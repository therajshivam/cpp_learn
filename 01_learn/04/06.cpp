// sort

// Search

#include<iostream>
using namespace std;

void sortArr(int arr[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1]= temp;
            }
            
        }
        
    }
    
}

int main(){

    int num[] = {12, 3, 6, 33, 0, 2, 10, 8, 5};
    int size = sizeof(num)/sizeof(num[0]);

    sortArr(num, size);

    for(int element : num){
        cout << element << " ";
    }
    

    return 0;
}