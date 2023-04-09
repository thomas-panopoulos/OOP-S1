#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    ParkingLot p(10);
    int id = 2;

    for (int i = 0; i < 10; i++) {
        Car c(i);
        p.parkVehicle(&c);
    }
    p.unparkVehicle(id);
    return 0;
}