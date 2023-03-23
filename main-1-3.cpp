#include "person.h"
#include <iostream>
using namespace std;
extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main() {
    deepCopyPersonList(createPersonList(5));
    return 0;
}