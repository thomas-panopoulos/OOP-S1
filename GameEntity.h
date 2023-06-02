#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>
class GameEntity {
    public:
    std::tuple<int,int> position;
    char type;
    GameEntity(int x, int y, char type) : position(x,y), type(type) {};

    std::tuple<int,int> getPos() {return position;};
    char getType() {return type;};
};

#endif