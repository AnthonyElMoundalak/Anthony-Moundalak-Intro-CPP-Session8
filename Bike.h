#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"
using namespace std;

// this is the header file for the bike class
// we define the name of the function to use
// bike class that inherits from vehicle class
class Bike : public Vehicle{
    // public funtions
    public:
        // constructor and destructor
        Bike(const string& brand, int speed, bool hasCarrier);
        virtual ~Bike();

        // override the displayInfo function
        void displayInfo() const override;
    
    // private attribute not accessible outside the bike class
    private:
        bool hasCarrier;
};

#endif // BIKE_H