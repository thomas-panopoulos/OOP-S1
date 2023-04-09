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
    int getParkingDuration(int ID);
    virtual ~Vehicle(){};
};

class Car : public Vehicle {
public:
    Car();
    Car(int ID);
    
    int getParkingDuration(int ID);
};

class Bus : public Vehicle {
public:
    Bus();
    Bus(int ID);
    int getParkingDuration(int ID);
};

class Motorbike : public Vehicle {
public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration(int ID);
};

#endif