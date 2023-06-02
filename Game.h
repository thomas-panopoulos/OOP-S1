#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Utils.h"
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <tuple>
#include <iostream>
class Game {
    private:
    std::vector<GameEntity*> entities;

    public:
    std::vector<GameEntity*> get_entities() {return this->entities;};
    void set_entities(GameEntity* entity) {entities.push_back(entity);};
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) 
    {
        for (int i = 0; i < numShips; i++) {
            std::tuple<int,int> tempTuple = Utils::generateRandomPos(gridWidth,gridHeight);
            GameEntity* tempEntity = new Ship(std::get<0>(tempTuple), std::get<1>(tempTuple));
            this->set_entities(tempEntity);
        }
        for (int i = 0; i <numMines; i++) {
            std::tuple<int,int> tempTuple = Utils::generateRandomPos(gridWidth,gridHeight);
            GameEntity* tempEntity = new Mine(std::get<0>(tempTuple), std::get<1>(tempTuple));
            this->set_entities(tempEntity);
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) 
    {
        for (int i = 0; i<maxIterations; i++) {
        if (!entities.empty()) 
        {
        for (int i=0; i < entities.size(); i++) 
        {
            if (entities.at(i)->getType() == 'S') 
            {
                static_cast<Ship*>(entities.at(i))->move(1,0);
                for (int j = 0; j < entities.size(); j++) 
                {
                    if (entities.at(j)->getType() == 'M') 
                    {
                        if (Utils::calculteDistance(entities.at(j)->getPos(),entities.at(i)->getPos())>mineDistanceThreshold) 
                        {
                            Explosion explosion = static_cast<Mine*>(entities.at(j))->explode();
                            
                            explosion.apply(*entities.at(i));
                            //std::cout << "explosion happened" << "ship type:" << entities.at(i)->getType() << std::endl;
                        }
                    }
                }
            }
        }
            for (int i = 0; i < entities.size(); i++) {
                if (entities.at(i)->getType() != 'X') {
                    break;
                }
                else {
                    exit(0);
                }
            }
        }
        }
        exit(0);
    }
};

#endif