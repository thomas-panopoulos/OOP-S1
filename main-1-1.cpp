#include "person.h"
#include <iostream>
using namespace std;
extern Person *createPersonArray(int n);

int main() {
    cout << createPersonArray(10) << endl;
    return 0;
}