#ifndef CAR_H
#define CAR_H
#include <ctime>


class Car : public Vehicle {
public:
    Car();
    Car(int ID);
    
    int getParkingDuration(int ID);
};

#endif