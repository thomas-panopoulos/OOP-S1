#include "person.h"
#include <iostream>
using namespace std;
void print_one( const Person& s ) {

    cout << "name: " << s.name << "  age: " << s.age << endl;
}

// print an array of shipments
void print_all( const Person array[], int n) {

    for( int i = 0 ; i < n ; ++i ) print_one( array[i] ) ;
}
Person* createPersonArray(int n) {
    Person* arr = new Person[n];
    for (int i = 0; i < n; i++) {
        arr[i].name = "John Doe";
        arr[i].age = 0;
        //cout << arr[i].name << " " << arr[i].age << endl;
    }
    //print_all(arr, n);
    return arr;
}