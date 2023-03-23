#include <string>
#include <iostream>
#ifndef PERSON_H
#define PERSON_H

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif