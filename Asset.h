#ifndef ASSET_H
#define ASSET_H
#include <string>
class Asset {
private:
    int value;
    std::string productType;

public:
    Asset();
    Asset(int value, std::string productType);
    std::string get_product_type();
    int get_value();
    ~Asset();
};



#endif