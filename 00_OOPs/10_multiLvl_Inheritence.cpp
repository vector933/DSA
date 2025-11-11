#include <iostream>
#include <stdio.h>
using namespace std;

class Vehicle {
public:
    void move() { cout << "Moving\n"; }
};

class FourWheeler : public Vehicle {
public:
    void wheels() { cout << "Has 4 wheels\n"; }
};

class Car : public FourWheeler {
public:
    void drive() { cout << "Driving car\n"; }
};


int main()
{

    Car c1;
    c1.move();

    return 0;
}