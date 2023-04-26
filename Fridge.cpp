#include "Fridge.h"
#include "Appliance.h"
Fridge::Fridge() : Appliance(), volume(0) {};

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {};

void Fridge::setVolume(double volume) { volume = volume;}

double Fridge::getVolume() { return volume;}

double Fridge::getPowerConsumption() { 
    double powerConsumption = powerRating * 24 * (volume/100);
    return powerConsumption;
}