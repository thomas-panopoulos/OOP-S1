#include "Person.h"
#include <iostream>
using namespace std;
extern PersonList createPersonList(int);
extern PersonList shallowCopyPersonList(PersonList);

int main() {
    shallowCopyPersonList(createPersonList(5));
    return 0;

}