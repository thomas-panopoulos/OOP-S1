#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    public:
    Explosion(int x, int y) : GameEntity(x,y,'E') {};

    void apply(GameEntity& entity) 
    {
       std::get<0>(entity.position) = -1, std::get<1>(entity.position) = -1;
        entity.type = 'X';

    }
};

#endif