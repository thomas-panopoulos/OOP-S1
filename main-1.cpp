#include "Effect.h"
#include "Utils.h"
#include "GameEntity.h"
#include <tuple>
#include <iostream>
int main() {
    GameEntity u(0,0,'t');

    std::tuple<int,int> point1 = Utils::generateRandomPos(100,100);
    std::tuple<int,int> point2 = Utils::generateRandomPos(100,100);

    std::cout << std::get<0>(point1) << std::get<1>(point1) <<std::endl;
    std::cout << std::get<0>(point2) << std::get<1>(point2) << std::endl;
    std::cout << Utils::calculteDistance(point1, point2) <<std::endl;

    return 0;
}