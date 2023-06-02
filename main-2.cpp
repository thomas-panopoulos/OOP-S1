#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include <iostream>
int main() {
    Ship s(0,0);
    Mine m(10,10);

    s.move(20,20);

    std::cout << std::get<0>(s.position) << std::get<1>(s.position) <<std::endl;
    Explosion explo = m.explode();

    explo.apply(s);

    std::cout << std::get<0>(s.position) << std::get<1>(s.position) <<std::endl;
    return 0;

}