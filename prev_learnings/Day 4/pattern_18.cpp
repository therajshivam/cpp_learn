//       1 
//     2 2
//   3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i=1;
    while(i<=n) {

        // space
        int space = n - i;
        while(space){
            cout<<" "<<" ";
            space=space-1;
        }

        // number
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}