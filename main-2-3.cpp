#include <iostream>
using namespace std;

extern void two_five_nine(int[], int);

int main() {
    int array[8] = {4,5,6,7,9,3,2,2};
    two_five_nine(array, 8);
    return 0;
}