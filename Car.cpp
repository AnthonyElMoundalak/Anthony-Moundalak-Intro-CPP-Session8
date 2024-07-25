#include "Car.h"
#include <iostream>

using namespace std;

// defining the constructor
Car::Car(const string& brand, int speed, int numDoors)
    : Vehicle(brand, speed){
    if (numDoors < 0){
        throw invalid_argument("Number of doors cannot be negative");
    }
    this->numDoors = numDoors;
    
    }

// destructor
Car::~Car(){}

// overriding the displayInfo function from the vehicle class
void Car::displayInfo() const {
    cout << "Car - Brand: " << brand << ", Speed: " << speed << ", Number of doors: " << numDoors << endl;
}