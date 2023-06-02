#ifndef PLAY_H
#define PLAY_H
#include <vector>
#include "Spot.h"
#include "Assists.h"
#include "Influence.h"
#include "Snare.h"
#include "Persona.h"
#include <iostream>
class Play {
    private:
    std::vector<Spot*> matrix;
    public:
    std::vector<Spot*>& getMatrix() {return this->matrix;}
    int mH;
    int mW;

    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) 
    {
        for (int i = 0; i< numPersonas; i++) 
        {
            std::tuple<int,int> tempTuple = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Persona* tempPointer = new Persona(std::get<0>(tempTuple), std::get<1>(tempTuple));
            matrix.push_back(tempPointer);
        }

        for (int i = 0; i< numSnares; i++) 
        {
            std::tuple<int,int> tempTuple = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Snare* tempPointer = new Snare(std::get<0>(tempTuple), std::get<1>(tempTuple));
            matrix.push_back(tempPointer);
        }

        mH = matrixHeight;
        mW = matrixWidth;
    }

    void playCycle(int maxCycles, double snareTriggerDistance) 
    {
        for (int i = 0; i < maxCycles; i++) 
        {
            for (int j = 0; j < matrix.size(); j++) 
            {
                if (matrix.at(j)->getCategory()=='P') 
                {
                    static_cast<Persona*>(matrix.at(j))->shift(1,0);

                    for (int k = 0; k <matrix.size(); k++) 
                    {
                        if (matrix.at(k)->getCategory()=='S') 
                        {
                            unsigned double distanceCheck = Assists::evaluateDistance(matrix.at(j)->getLoc(),matrix.at(k)->getLoc());
                            if (distanceCheck < snareTriggerDistance) 
                            {
                                static_cast<Snare*>(matrix.at(k))->implement(*matrix.at(j));//might need to check if snare is operable
                            }
                        }
                    }
                    std::tuple<int,int> tempLoc = matrix.at(j)->getLoc();
                    if (std::get<0>(tempLoc) > this->mW || std::get<1>(tempLoc) < this->mH) {
                        std::cout << "Persona has won the game!" << std::endl;
                        exit(0);
                    }
                }
                
            }
        }
        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};


#endif