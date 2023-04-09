#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike : public Vehicle {
public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};

#endif