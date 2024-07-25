#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

// this is the header file for the vehicle class
// we define the name of the function to use
class Vehicle{
    // public functions can be used by anyone
    public:
        // constructer
        Vehicle(const string& brand, int speed);

        // destructer
        virtual ~Vehicle();

        // getter for brand name
        string getBrand() const;

        // getter for speed
        int getSpeed() const;

        // display info function
        virtual void displayInfo() const;

    // here are the protected atribute that can be used only by the class it self and her children
    protected:
        string brand;
        int speed;
};

#endif // VEHICLE_H