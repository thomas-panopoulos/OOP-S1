#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H
#include "Asset.h"
#include <string>
class AssetPortfolio {
    private:
    Asset* assets;
    int size;
    int curr_assets{0};

    public:
    AssetPortfolio();
    AssetPortfolio(int size);
    int get_num_assets(); 
    bool has_asset(std::string product); 
    Asset *get_assets(); 
    bool add_asset(Asset new_asset);
    ~AssetPortfolio();  // destructor
};


#endif