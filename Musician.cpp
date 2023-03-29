#include "Musician.h"

Musician::Musician() {
    instrument = "NULL";
    experience = 0;
}
Musician::Musician(std::string instrum, int exp) {
    instrument = instrum;
    experience = exp;
}

std::string Musician::get_instrument() {
    return this->instrument;
}

int Musician::get_experience() {
    return this->experience;
}
