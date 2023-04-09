#include "Vehicle.h"
#include "Car.h"

Car::Car() : Vehicle() {};

Car::Car(int id) : Vehicle(id) {};

int Car::getParkingDuration(int id) { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.9;
}