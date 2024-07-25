#include "Bike.h"
#include <iostream>

using namespace std;

// defining the constructor
Bike::Bike(const string& brand, int speed, bool hasCarrier)
     : Vehicle(brand, speed), hasCarrier(hasCarrier){}

Bike::~Bike(){}

// overriding the displayInfo function from vehicle class
void Bike::displayInfo() const{
    cout << "Bike - Brand: " << brand << ", Speed: " << speed << ", Has carrier: " << (hasCarrier ? "Yes" : "No") << endl;
}