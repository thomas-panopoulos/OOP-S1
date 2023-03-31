#include "Asset.h"
#include <iostream>

int main() {
    Asset a1(2, "stock");
    Asset a2;
    std::cout << a1.get_product_type() << std::endl;
    std::cout << a2.get_value() << std::endl;
    return 0;
}