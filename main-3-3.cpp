#include <iostream>

using namespace std;

extern double weighted_average(int[], int);

int main () {
    int array[5] = {2,2,3,5,6};
    weighted_average(array, 5);
    return 0;
}