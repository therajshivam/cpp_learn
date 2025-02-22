// function template
// describes what a function looks like
// can be used to generate as manu overloaded functions as needed, each using diff datatypes

#include<iostream>
using namespace std;

template <typename T>

T max(T x, T y){
    return (x > y) ? x : y;
}


int main () {

    cout << max(1.1, 2.1) << '\n';

    return 0;
}