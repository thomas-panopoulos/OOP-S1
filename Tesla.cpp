#include "Car.h"
#include "Tesla.h"
Tesla::Tesla() : Car() {};
Tesla::Tesla(char model, int price) : Car(price), model(model) {};

void Tesla::chargeBattery(int mins) {
        this->batteryPercentage += mins*0.5;
        if (batteryPercentage < 100) {
            batteryPercentage = 100;
        }
};

void Tesla::drive(int kms) {
        if (batteryPercentage > 0) {
            this->emissions += 74*kms;//possibly gradescope error
                this->batteryPercentage -= int(kms/5);
        }
}

char Tesla::get_model() {
    return model;
}

float Tesla::get_batteryPercentage() {
    return batteryPercentage;
}

void Tesla::set_model(char model) {
    this->model = model;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    if (batteryPercentage <= 0) {
        this->batteryPercentage = 0;
    }
    else{
    this->batteryPercentage = batteryPercentage;    
    }

}


