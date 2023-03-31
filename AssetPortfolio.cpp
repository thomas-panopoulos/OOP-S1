#include "AssetPortfolio.h"
#include "Asset.h"
#include <string>

AssetPortfolio::AssetPortfolio() {
    size = 0;
}

AssetPortfolio::AssetPortfolio(int len) {
    size = len;
    assets = new Asset[len];
}

int AssetPortfolio::get_num_assets() {
    return curr_assets;
}

bool AssetPortfolio::has_asset(std::string product) {
    for (int i = 0; i < curr_assets+1; i++) {
        if (assets[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets() {
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (curr_assets < size) {
        assets[curr_assets] = new_asset;
        curr_assets++;
        return true;
    }
    else {
        return false;
    }
}

AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}