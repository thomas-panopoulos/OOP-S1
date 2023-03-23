#include "Person.h"
#include <iostream>
using namespace std;

Person* createPersonArray(int n) {
    Person* arr = new Person[n];
    for (int i = 0; i < n; i++) {
        Person temp;
        temp.name = "John Doe", temp.age = 0;
        arr[i].name = temp.name;
        arr[i].age = temp.age;
    }
    return arr;
}