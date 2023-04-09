#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle() : ID(0), timeOfEntry(0) {};

Vehicle::Vehicle(int id) : ID(id), timeOfEntry(time(0)) {};

int Vehicle::getParkingDuration(int id) {
    return time(NULL) - timeOfEntry;
}

Car::Car() : Vehicle() {};

Car::Car(int id) : Vehicle(id) {};

Bus::Bus() : Vehicle() {};

Bus::Bus(int id) : Vehicle(id) {};

Motorbike::Motorbike() : Vehicle() {};

Motorbike::Motorbike(int id) : Vehicle(id) {};

int Vehicle::getID() { return ID;};


int Car::getParkingDuration(int id) { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.9;
}

int Bus::getParkingDuration(int id) { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.75;
}

int Motorbike::getParkingDuration(int id) { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.85;
}




