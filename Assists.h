#ifndef ASSISTS_H
#define ASSISTS_H
#include <tuple>
#include <random>
#include <cmath>
class Assists {
    public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) 
    {
         std::tuple<int,int> returnTuple;


        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr1(0, matrixWidth);
        std::uniform_int_distribution<> distr2(0, matrixHeight);


        std::get<0>(returnTuple) = distr1(gen);

        std::get<1>(returnTuple) = distr2(gen);

        return returnTuple;
    }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) 
    {
        double distance = std::sqrt((std::pow((std::get<0>(loc2)-std::get<0>(loc1)),2.0))+(std::pow((std::get<1>(loc2)-std::get<1>(loc1)),2.0)));
        return distance;
    }
};

#endif