#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike() : Vehicle() {};

Motorbike::Motorbike(int id) : Vehicle(id) {};

int Motorbike::getParkingDuration() { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.85;
}
