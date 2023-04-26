#include "Appliance.h"
Appliance::Appliance() {
    isOn = false;
    powerRating = powerRating;
}
Appliance::Appliance(int powerRating) {
    isOn = false;
    powerRating = powerRating;
}
void Appliance::turnOff() {
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}
bool Appliance::get_isOn() {
    return isOn;
}

int Appliance::get_powerRating() {
    return powerRating;
}

void Appliance::set_powerRating(int power) {
    powerRating = power;
}
double Appliance::getPowerConsumption() {
    return 0;
}