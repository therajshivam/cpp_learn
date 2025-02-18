#include <iostream>
using namespace std;

int main(){
    // fill() : fills a range elements with a specified value
    //         fills(begin, end, value)

    // string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    // for(string food : foods) {
    //     cout << food << '\n';
    // }

    // string foods[100];

    // fill(foods, foods + 100, "pizza");
    // for(string food : foods) {
    //         cout << food << '\n';
    //     }


    const int size = 99;
    string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "hotdogs");
    for(string food : foods) {
            cout << food << '\n';
        }
    
    
    return 0;
}