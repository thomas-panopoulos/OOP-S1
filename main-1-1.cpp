#include "Car.h"
#include "iostream"

int main() {
    Car test;
    test.set_price(20000);
    std::cout << test.get_price() << std::endl;

}