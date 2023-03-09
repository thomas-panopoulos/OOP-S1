#include <cmath>

int binary_to_int(int array[], int len) {
    int cumsum{};

    for (int i = 0; i < len; i++) {
        cumsum += array[i] * pow(2, i);
    }
    return cumsum;
}