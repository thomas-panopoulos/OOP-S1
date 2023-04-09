#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle();
    Vehicle(int ID);
    int getID();
    int getParkingDuration();
    virtual ~Vehicle(){};
};




#endif