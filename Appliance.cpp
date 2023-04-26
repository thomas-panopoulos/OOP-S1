#include "Appliance.h"



Appliance::Appliance() {
    turnOff();
    set_powerRating(0);
}

Appliance::Appliance(int powerRating) {
    turnOff();
    set_powerRating(powerRating);
}

void Appliance::turnOff() {
    set_isOn(false);
}

void Appliance::turnOn() {
    set_isOn(true);
}

void Appliance::set_isOn(bool on) {
    isOn = on;
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