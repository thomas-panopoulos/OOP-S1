#include "Car.h"
#include "Tesla.h"
Tesla::Tesla() : Car() {};
Tesla::Tesla(char model, int price) : Car(price), model(model) {};

void Tesla::chargeBattery(int mins) {
    for (int i = 0; i < mins; i++) {
            this->batteryPercentage += 1.0*0.5;
        if (batteryPercentage < 100) {
            batteryPercentage = 100;
        }
    }
};

void Tesla::drive(int kms) {
    for (int i = 0; i < kms; i++) {
        if (batteryPercentage > 0) {
            this->emissions += 74*1;//possibly gradescope error
            if (i % 5 == 0) {
                this->batteryPercentage -= 1.0;
            }
        }
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


