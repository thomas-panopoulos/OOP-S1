#include "Car.h"
#include "Tesla.h"

Tesla::Tesla() : Car(), model('NULL') {};
Tesla::Tesla(char model, int price) : Car(price), model(model) {};

void Tesla::chargeBattery(int mins) {
    for (int i = 0; i < mins*10; i++) {
        if (batteryPercentage < 100) {
            this->batteryPercentage += 0.1*0.5;
        }
    }
};

void Tesla::drive(int kms) {
    for (int i = 0; i < kms*10; i++) {
        if (batteryPercentage > 0) {
            this->emissions += 0.74*1;//possibly gradescope error
            if (i % 50 == 0) {
                this->batteryPercentage -= 1;
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
    this->batteryPercentage = batteryPercentage;
}


