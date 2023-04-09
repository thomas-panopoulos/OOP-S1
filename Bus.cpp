#include "Vehicle.h"
#include "Bus.h"

Bus::Bus() : Vehicle() {};

Bus::Bus(int id) : Vehicle(id) {};

int Bus::getParkingDuration(int id) { 
    long int x,y;
    x = this->timeOfEntry;
    y = time(0);
    return (y-x)*0.75;
}