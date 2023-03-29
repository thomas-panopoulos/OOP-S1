#include "Orchestra.h"
#include "Musician.h"
#include <string>
#include <iostream>
Orchestra::Orchestra() {
    size = 0;
}

Orchestra::Orchestra(int len) {
    size = len;
}

int Orchestra::get_current_number_of_members() {
    return current_amount;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < size; i++) {
        if (musicians[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return musicians;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_amount < size) {
        musicians[current_amount] = new_musician;
        current_amount++;
        return true;
    }
    else {
        return false;
    }

}

Orchestra::~Orchestra() {
    delete[] musicians;
}