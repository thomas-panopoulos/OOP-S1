#ifndef SPOT_H
#define SPOT_H
#include <tuple>
class Spot 
{
    public:
    std::tuple<int,int> location;
    char category;
    Spot(int x, int y, char category) : location(x,y), category(category) {};
    std::tuple<int, int> getLoc() {return this->location;};
    char getCategory() {return this->category;};
    void setLoc(int x, int y) {std::get<0>(this->location) = x; std::get<1>(this->location) = y;};
    void setCategory(char category) {this->category = category;};
};

#endif