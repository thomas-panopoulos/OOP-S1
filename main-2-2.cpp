#include "iostream"
#include "Car.h"
#include "Tesla.h"
using namespace std;
int main() {
    Tesla tester;

    tester.drive(151);
    //cout << test.get_emissions() << endl;
    cout << tester.get_batteryPercentage() << endl;
    return 0;
}