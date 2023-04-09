#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <string>

int main() {
    ParkingLot p(10);
    for (int i = 0; i < 10; i++) {
        Car c(i);
        p.parkVehicle(&c);
    }
    p.countOverstayingVehicles(-1);
    return 0;
}