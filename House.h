#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
class House {
    private:
    Appliance** appliances;
    int numAppliances;
    int count = 0;

    public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
};

#endif