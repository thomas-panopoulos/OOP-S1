#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"
class Mine : public GameEntity{
    public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {};
    Explosion explode() 
    {
        Explosion explosion(std::get<0>(this->position),std::get<1>(this->position));
        this->type = 'X';
        return explosion;
    }
};

#endif