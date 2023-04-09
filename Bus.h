#ifndef BUS_H
#define BUS_H

class Bus : public Vehicle {
public:
    Bus();
    Bus(int ID);
    int getParkingDuration(int ID);
};

#endif