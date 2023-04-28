#ifndef FLEET_H
#define FLEET_H
#include "Car.h"
class Fleet {
    private:
    Car** fleet;
    public:
    Car **getFleet();
    Fleet();
};


#endif