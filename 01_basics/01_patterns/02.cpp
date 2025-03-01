#include<bits/stdc++.h>
using namespace std;

void print7(int n);
void print8(int n);
void print9(int n);
void print10(int n);

int main() {
    int n;
    cin>>n;
    print10(n);
    return 0;
}

void print7(int n){
    for (int i = 0; i<n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j<2*i+1; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
    cout << endl;
    }
}

void print8(int n){
    for (int i = 0; i<n; i++) {
        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j<((n-i)*2)-1; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }
    cout << endl;
    }
}

void print9(int n){
    for (int i = 0; i<n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j<2*i+1; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
    cout << endl;
    }
    for (int i = 0; i<n; i++) {
        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        // star
        for(int j = 0; j<((n-i)*2)-1; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }
    cout << endl;
    }
}

// void print10(int n){
//     for(int i = 1; i <= 2*n-1; i++){
//         // upper
//         for(int j = 0; j < i+1; j++){
//             cout << "*";
//         }
//         // lower
//         for(int j = 0; )
//         cout << endl;
//     }
// }