#include <iostream>
#include <stdio.h>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Starting vehicle\n"; }
};

class Car : public Vehicle {
public:
    void honk() { cout << "Car honking\n"; }
};

class Bus : public Vehicle {
public:
    void openDoors() { cout << "Bus doors opening\n"; }
};


int main()
{
    class Car c1;
    c1.start();
    c1.honk();

    cout<<endl;

    class Bus b1;
    b1.start();
    b1.openDoors();

    return 0;
}