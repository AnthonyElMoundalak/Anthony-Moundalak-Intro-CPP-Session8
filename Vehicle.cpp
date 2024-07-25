#include "Vehicle.h"
#include <iostream>

using namespace std;

// defining the constructer
Vehicle::Vehicle(const string& brand, int speed) {
    this->brand = brand;
    if (speed < 0){
        throw invalid_argument("Speed cannot be negative");
    }
    this->speed = speed;
}

// destructure
Vehicle::~Vehicle(){}

// getter for the brand attribute to not allow the changing
string Vehicle::getBrand() const{
    return brand;
}

// getter for the speed attribute
int Vehicle::getSpeed() const{
    return speed;
}

// display function
void Vehicle::displayInfo() const{
    cout << "Brand: " << brand << ", Speed: " << speed << endl;
}