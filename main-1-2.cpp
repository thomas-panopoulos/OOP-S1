#include "Person.h"
#include <iostream>
using namespace std;
extern PersonList createPersonList(int);

int main() {
    createPersonList(5);
    return 0;
    
}