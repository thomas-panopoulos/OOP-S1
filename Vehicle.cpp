#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle() : ID(0), timeOfEntry(0) {};

Vehicle::Vehicle(int id) : ID(id), timeOfEntry(time(0)) {};

int Vehicle::getParkingDuration() {
    return time(NULL) - timeOfEntry;
}
int Vehicle::getParkingDuration(int id) {
    return time(NULL) - timeOfEntry;
}
int Vehicle::getID() { return ID;};



