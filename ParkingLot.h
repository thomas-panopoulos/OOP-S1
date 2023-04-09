#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle* vehicles;
    int maxCap;
    int currCap;
    bool* free;
public:
ParkingLot();
ParkingLot(int maxCap);
int getCount();
parkVehicle(Vehicle* vehicle);
unparkVehicle(int ID);
int countOverstayingVehicles(int maxParkingDuration);
 
};


#endif