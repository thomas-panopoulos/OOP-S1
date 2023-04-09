#include "Vehicle.h"
#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    
    cout << "How many cars?" << endl;
    cin >> x;
    cout << "How many Buses" << endl;
    cin >> y;
    cout << "How many Motorbikes?" << endl;
    cin >> z;
    int len = x+y+z;
    Vehicle* arr = new Vehicle[len];
    for (int i = 0; i < x; i++) {
        arr[i] = Car(i);
    }
    for (int i = x; i < (y+x); i++) {
        arr[i] = Bus(i);
    }
    for (int i = y; i < len; i++) {
        arr[i] = Motorbike(i);
    }
    for (int i = 0; i < len; i++) {
        cout << "time of vehicle" << arr[i].getParkingDuration(arr[i].getID()) << endl;
    }
    return 0;
}