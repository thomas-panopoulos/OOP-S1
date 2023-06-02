#ifndef PERSONA_H
#define PERSONA_H
#include "Spot.h"
#include <tuple>
class Persona : public Spot {
    public:
    Persona(int x, int y) : Spot(x,y,'P') {};
    void shift(int dx, int dy) {
    std::get<0>(this->location) = std::get<0>(this->location)+dx; 
    std::get<1>(this->location) = std::get<1>(this->location)+dy;
    }
};

#endif