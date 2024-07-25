#ifndef CAR_H
#define CAR_H


#include "Vehicle.h"
using namespace std;

// this is the header file for the car class
// we define the name of the function to use
// car class that inherits from vehicle class
class Car : public Vehicle{
    // public functions
    public:
        // constructor and destructor
        Car(const string& brand, int speed, int numDoors);
        virtual ~Car();

        // override the display function
        void displayInfo() const override;

    // private attributes not accessible outside the car class
    private:
        int numDoors;
};

#endif // CAR_H