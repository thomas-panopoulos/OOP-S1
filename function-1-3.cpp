#include "Person.h"
#include <iostream>
using namespace std;


// new array of people, fill with old array values, create new personlist and then assign to new memory
PersonList deepCopyPersonList(PersonList p1) {
    Person* arr2 = new Person[p1.numPeople];

    for (int i = 0; i < p1.numPeople; i++) {
        arr2[i].name = p1.people[i].name;
        arr2[i].age = p1.people[i].age;
    }
    PersonList b;
    b.numPeople = p1.numPeople;
    b.people = arr2;
    return b;
}

PersonList createPersonList(int n) {
    Person* arr = new Person[n];
    for (int i = 0; i < n; i++) {
        Person temp;
        temp.name = "John Doe", temp.age = 0;
        arr[i].name = temp.name;
        arr[i].age = temp.age;
    }
    PersonList a;
    a.numPeople = n;
    a.people = arr;
    return a;
}