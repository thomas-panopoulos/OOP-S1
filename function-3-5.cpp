#include <iostream>

using namespace std;

double sum_even(double array[], int len) {
    double sum{0};
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            sum += array[i];
        }
    }
    return sum;
}