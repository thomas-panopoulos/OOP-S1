#include "Asset.h"
#include <string>
#include <iostream>
Asset::Asset() {
    value = 0;
    productType = "";
}


Asset::Asset(int val, std::string product) {
    value = val;
    productType = product;
}

std::string Asset::get_product_type() {
    return productType;
}

int Asset::get_value() {
    return value;
}

Asset::~Asset() {
    
}