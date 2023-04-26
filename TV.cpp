#include "TV.h"
#include "Appliance.h"

TV::TV() : Appliance() {};

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {};

void TV::setScreenSize(double screenSize) {
    screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    double powerConsumption = powerRating * (screenSize/10);
    return powerConsumption;
}