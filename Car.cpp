#include "Car.h"

Car::Car() : price(0), emissions(0) {};

Car::Car(int price) : price(price*1.7), emissions(0) {};

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
    emissions = emissions;
}

void Car::set_price(int price) {
    price = price;
}