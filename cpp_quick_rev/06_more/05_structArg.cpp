#include<iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car car);

int main () {

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";
    
    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car car){
    cout << car.model<< '\n';
    cout << car.year<< '\n';
    cout << car.color<< '\n';
}