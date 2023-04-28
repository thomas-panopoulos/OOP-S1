#include "Car.h"

Car::Car() : price(0), emissions(0) {};

Car::Car(int price) : price(price), emissions(0) {};

void Car::drive(int kms) {
    emissions = kms * 20;
}

int Car::get_price() {
    return price;
}

int Car::get_emissions() {
    return emissions;
}

void Car::set_emissions(int emissions) {
    this->emissions = emissions;
}

void Car::set_price(int price) {
    this->price = price;
}