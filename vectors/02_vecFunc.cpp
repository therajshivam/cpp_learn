// VECTOR FUNCTIONS
// size, push_back, pop_back, front, back, at

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};

    // size
    cout << "size = " << ch.size() << endl;

    // push_back
    // element will add at the back of the vector
    ch.push_back('x'); 
    ch.push_back('y');
    ch.push_back('z');
    cout << "size after push back = " << ch.size() << endl;

    // pop_back
    // element will delete from the back of the vector
    ch.pop_back();
    cout << "size after pop back = " << ch.size() << endl;

    // front
    // prints the first element of the vector
    cout << ch.front() << '\n';

    // back
    // prints the last element of the vector
    cout << ch.back() << '\n';

    // at
    // another syntax accessing the a value at a particular value
    // ch[i] same thing
    cout << ch.at(0) << '\n';

    // print whole vector
    for(char val : ch) {
        cout << val << " ";
    }  


    return 0;
}
