// include the iostream library
#include <iostream>
#include <memory>
// include my header files for the vehicle, car and bike classes
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

int main(){
    try{
        // show before the exception in try block all statement will run
        cout << "before the exception" << endl;

        // creating vehicle, car and bike instances
        Vehicle my_vehicle("Camion", 150);
        Car my_car = Car("Toyota", 250, 4);
        Bike my_bike("Yamaha", 300, true);

        // testing the overriding
        my_vehicle.displayInfo();
        my_car.displayInfo();
        my_bike.displayInfo();

        // testing the inheritance
        cout << my_car.getSpeed() << endl;

        // testing the exception
        Car car_error("BMW", 550, -2);

        // show after the exception in try block no statement will run
        cout << "this print will not be excecuted";
    }
    // catching the error
    catch(const invalid_argument& e){
        cerr << e.what() << endl;
    }

    // testing another exception
    try{
        Bike b("Suzuki", -350, false);
    }
    catch(const invalid_argument& e){
        cerr << e.what() << endl;
    }
    
    return 0; 
}