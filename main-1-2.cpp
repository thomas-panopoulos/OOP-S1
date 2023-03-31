#include "AssetPortfolio.h"
#include "Asset.h"
#include <iostream>

int main() {
    AssetPortfolio ap1(3);
    Asset a1(2, "stock");
    Asset a2(2, "stock");
    Asset a3(2, "stock");
    Asset a4(2, "stock");

    if (ap1.add_asset(a1)) {
        std::cout << "works" << std::endl;
    }
    else {
        std::cout << "could not add asset" << std::endl;
    }
    if (ap1.add_asset(a2)) {
        std::cout << "works" << std::endl;
    }
    else {
        std::cout << "could not add asset" << std::endl;
    }
    if (ap1.add_asset(a3)) {
        std::cout << "works" << std::endl;
    }
    else {
        std::cout << "could not add asset" << std::endl;
    }
    if (ap1.add_asset(a4)) {
        std::cout << "works" << std::endl;
    }
    else {
        std::cout << "could not add asset" << std::endl;
    }
    std::cout << ap1.get_assets() << std::endl;
    std::cout << ap1.has_asset("stock") << std::endl;
}