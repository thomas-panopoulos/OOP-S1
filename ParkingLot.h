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
void parkVehicle(Vehicle* vehicle);
void unparkVehicle(int ID);
int countOverstayingVehicles(int maxParkingDuration);
 
};


#endif