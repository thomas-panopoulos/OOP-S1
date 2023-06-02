#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <random>
#include <iostream>
#include <cmath>
class Utils {
    private:

    public:
    static std::tuple<int,int> generateRandomPos(int gridWidth, int gridHeight) 
    {
        std::tuple<int,int> returnTuple;


        std::random_device rd;  // a seed source for the random number engine
        std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
        std::uniform_int_distribution<> distr1(0, gridWidth);
        std::uniform_int_distribution<> distr2(0, gridHeight);


        std::get<0>(returnTuple) = distr1(gen);

        std::get<1>(returnTuple) = distr2(gen);

        return returnTuple;
    }

    static double calculteDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) 
    {
        double distance = std::sqrt((std::pow((std::get<0>(pos2)-std::get<0>(pos1)),2.0))+(std::pow((std::get<1>(pos2)-std::get<1>(pos1)),2.0)));
        return distance;
    }
};


#endif