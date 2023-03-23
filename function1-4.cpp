#include "Person.h"
#include <iostream>
using namespace std;


// new array of people, fill with old array values, create new personlist and then assign to new memory
PersonList shallowCopyPersonList(PersonList p1) {
    PersonList b;
    b = p1;
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