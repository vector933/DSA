#include <iostream>
#include <stdio.h>
using namespace std;

class LandVehicle {
public:
    void drive() { cout << "Driving on land\n"; }
};

class WaterVehicle {
public:
    void sail() { cout << "Sailing on water\n"; }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    void transform() { cout << "Switching mode\n"; }
};

int main()
{

    class AmphibiousVehicle a1;
    a1.drive();
    a1.sail();
    a1.transform();
    return 0;
}