# Anthony-Moundalak-Intro-CPP-Session8

## Overview

This project demonstrates key object-oriented programming concepts in C++ including inheritance, polymorphism and exception handling. It includes a base class Vehicle and derived classes Car and Bike. Each class is defined in its own header and implementation files, showcasing best practices for code organization in C++.

## Features

- **Inheritance:** `Car` and `Bike` classes inherit from the `Vehicle` base class.
- **Method Overriding:** The program uses virtual functions to allow derived classes to provide specific implementations of the `displayInfo()` method.
- **Exception Handling:** The program demonstrates basic exception handling with `try-catch` blocks.

## Class Details

### Vehicle

The `Vehicle` class serves as the base class for all vehicle types.

#### Constructors

- **`Vehicle(const string& brand, int speed)`:** Constructs a `Vehicle` object with the specified brand and speed.

#### Methods

- **`string getBrand() const`:** Returns the brand of the vehicle.
- **`int getSpeed() const`:** Returns the speed of the vehicle.
- **`void displayInfo() const`:** Displays the brand and speed of the vehicle.

### Car

The `Car` class is derived from the `Vehicle` class and adds specific attributes and behavior for cars.

#### Constructors

- **`Car(const string& brand, int speed, int numDoors)`:** Constructs a `Car` object with the specified brand, speed, and number of doors.

#### Methods

- **`void displayInfo() const`:** Displays the brand, speed, and number of doors of the car. Overrides the `Vehicle::displayInfo` method.

### Bike

The `Bike` class is derived from the `Vehicle` class and adds specific attributes and behavior for bikes.

#### Constructors

- **`Bike(const string& brand, int speed, bool hasCarrier)`:** Constructs a `Bike` object with the specified brand, speed, and carrier status.

#### Methods

- **`void displayInfo() const`:** Displays the brand, speed, and carrier status of the bike. Overrides the `Vehicle::displayInfo` method.

## Usage

### Compilation

To compile the program, run the following command in your terminal:

```sh
g++ main.cpp Vehicle.cpp Car.cpp Bike.cpp -o vehicle_program
```

### Execution

To run the compiled program, use the following command:

```sh
./vehicle_program
```

### Outout

The program will display information about different vehicles and demonstrate exception handling:

```sh
before the exception
Brand: Camion, Speed: 150
Car - Brand: Toyota, Speed: 250, Number of doors: 4
Bike - Brand: Yamaha, Speed: 300, Has carrier: Yes
250
Number of doors cannot be negative
Speed cannot be negative
```
