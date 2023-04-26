#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

House::House() : numAppliances(0) {};
House::House(int numAppliances) : numAppliances(numAppliances), appliances(new Appliance *[numAppliances]) {};


bool House::addAppliance(Appliance* appliance) {
    if (count < numAppliances) {
        appliances[count] = appliance;
        return true;
    }
    else {
        return false;
    }
}

double House::getTotalPowerConsumption() {
    double totalPower{0};
    for (int i = 0; i < count; i++) {
        totalPower += appliances[i]->getPowerConsumption();
    }
    return totalPower;
}


