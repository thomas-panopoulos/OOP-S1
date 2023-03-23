#include "Person.h"
#include <iostream>
using namespace std;

PersonList createPersonList(int n) {
    Person* arr = new Person[n];
    for (int i = 0; i < n; i++) {
        Person temp;
        temp.name = "Jane Doe", temp.age = 1;
        arr[i].name = temp.name;
        arr[i].age = temp.age;
    }
    PersonList a;
    a.numPeople = n;
    a.people = arr;
    return a;
}