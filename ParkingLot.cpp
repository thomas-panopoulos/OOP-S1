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
    int c(0);
    bool flag = false;
    Vehicle *newArr = new Vehicle[maxCap];
    for (int i = 0; i < currCap; i++) {
        if (vehicles[i].getID() == ID) {
            flag = true;
        }
        else {
            newArr[c] = vehicles[i];
            c++;
        }
}
if (flag == false) {
    std::cout << "Vehicle not in the lot" << std::endl;
}
currCap = c;
delete[] vehicles;
Vehicle *vehicles = newArr;
}
/*
void ParkingLot::unparkVehicle(int ID) {
    int x;
    for (int i = 0; i < currCap; i++) {
        if (vehicles[i].getID() == ID){
            x = 1;
            free[i] = true; 
            currCap--;
        }
    }
    if (x == 0) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
    
}*/

int ParkingLot::countOverstayingVehicles(int max) {
    int total{0};
    for (int i = 0; i < maxCap; i++) {
        if (vehicles[i].getParkingDuration(vehicles[i].getID()) > max) {
            total += 1;
        }
    }
    return total;
}