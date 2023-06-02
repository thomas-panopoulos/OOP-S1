#ifndef SNARE_H
#define SNARE_H
#include "Influence.h"
#include "Spot.h"
#include <tuple>

class Snare : public Influence , public Spot {
    public:
    Snare(int x, int y) : Spot(x,y,'S') {};
    bool operative;
    bool isOperative() {return this->operative;};
    void implement(Spot& spot) {
        spot.setCategory('S');
        this->operative = false;
    }
};

#endif