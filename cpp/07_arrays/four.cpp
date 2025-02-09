// function returning an array
// pointers : it is a datatype which stores memory address
// pointer points memory address
// * : datatype
// & : value
// eg. int is * and & is 6

// normally in cpp we have normal memory which is stack memory.
// but in this case we deal with dynamic memory which is heap.

// new keyword is use to declare a dynamic memory 

#include<iostream>
using namespace std;


int* prepareChaiOrders (int cups) {
    int* orders = new int[cups];
    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}


int main () {
    
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++) {
        cout << "Cups: " << i + 1 << " has " << chaiOrder[i] << " ml. \n";
    }
    
    // cleaning function from memory
    delete[] chaiOrder;


    return 0;
}
