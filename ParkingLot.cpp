#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
#include <ctime>

ParkingLot::ParkingLot() : maxCap(0), currCap(0) {};



ParkingLot::ParkingLot(int max) {
    maxCap = max;
    currCap = 0;
    vehicles = new Vehicle[max];
    free = new bool[max];
    for (int i = 0; i < max; i++) {
    free[i] = true;
    }
};

int ParkingLot::getCount() {
    return currCap;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currCap < maxCap) {
        for (int i = 0; i < maxCap; i++) {
            if (free[i] == true) {
                vehicles[i] = *vehicle;
                free[i] = false;
                currCap++;
                break;
            }
        }
    }
    else {
        std::cout << "The lot is full" << std::endl;
    }
}



void ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < currCap; i++) {
        if (vehicles[i].getID() == ID){
            free[i] = true; 
            currCap--;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int max) {
    int total;
    for (int i = 0; i < maxCap; i++) {
        if (vehicles[i].getParkingDuration(vehicles[i].getID()) > max) {
            total += 1;
        }
    }
    return 0;
}