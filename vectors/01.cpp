//  vectors

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // VECTOR INITIALIZATION

    // empty vector
    // vector<int> vec; // 0 size 
    

    // vector with values
    vector<int> vec = {1, 2, 3}; // 3 size
    cout << vec[0] << endl;


    // vector with fixed size
    vector<int> vect(5, 0); 
    // 3 => size of the vector
    // 0 => it is the value to put on every indexes
    cout << vect[0] << endl;
    cout << vect[1] << endl;
    cout << vect[2] << endl;
    cout << vect[3] << endl;
    cout << vect[4] << endl;

    // LOOPING 

    // for each loop => special type of loop for vectors
    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};
    for(char val : ch) {
        cout << val << " ";
    }   

    return 0;
}
