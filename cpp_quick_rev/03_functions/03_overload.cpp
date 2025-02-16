#include <iostream>
using namespace std;


void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main() {
    bakePizza("pepperoni", "mashroom");

    return 0;
}

void bakePizza() {
    cout<<"Here is ur pizza!\n";
}

void bakePizza(string topping1) {
    cout<<"Here is ur " <<topping1 <<" pizza!\n";
}

void bakePizza(string topping1, string topping2) {
    cout<<"Here is ur " <<topping1 <<" and " << topping2 <<" pizza!\n";
}

// function signature : function name + function parameters
// each function signature needs to be unique 