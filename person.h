#include <string>
#include <iostream>
#ifndef PERSON
#define PERSON

struct Person {
    std::string name;
    int age;
    /*void print() {
        std::cout << "name:" name << " age:" age << std::endl;
    }*/
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif