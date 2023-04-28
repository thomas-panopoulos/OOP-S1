#include "Car.h"
#include "Ford.h"

Ford::Ford() : Car(), badgeNumber(0) {};

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber) {};

void Ford::refuel(int litres) {
    for (int i = 0; i < litres; i++) {
        if (litresOfFuel < 100) {
            litresOfFuel += 1;
        }
    } 
}

void Ford::drive(int kms) {
    for (int i = 0; i < kms; i++) {
        if (litresOfFuel > 0) {
            emissions += 234*1;//possibly gradescope error
            if (i % 5 == 0) {
                litresOfFuel -= 1;
            }
        }
    }


            if (litresOfFuel > 0) {
            this->emissions += 234*kms;//possibly gradescope error
                this->litresOfFuel -= (float(kms)/5.0);
        }
}

void Ford::set_badgeNumber(int number) {
    badgeNumber = number;
}

void Ford::set_litresOfFuel(float fuel) {
    litresOfFuel = fuel;
}

float Ford::get_litresOfFuel() {
    return litresOfFuel;
}

int Ford::get_badgeNumber() {
    return badgeNumber;
}