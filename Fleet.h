#ifndef FLEET_H
#define FLEET_H
#include "Car.h"
class Fleet {
    private:
    Car** fleet;
    public:
    Car **get_fleet();
    Fleet();
};


#endif