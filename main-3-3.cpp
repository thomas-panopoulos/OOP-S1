#include <iostream>
using namespace std;

extern double weighted_average(int[], int);

int main () {
    int array[6] = {1,2,1,3,1,4};
    cout << weighted_average(array, 6);
    return 0;
}