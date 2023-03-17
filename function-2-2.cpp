#include <math.h>
#include <algorithm>

int binary_to_int(int array[], int len) {
    int cumsum{0};
    std::reverse(array, array+len);
    for (int i = 0; i < len; i++) {
        cumsum += array[i] * pow(2, i);
    }
    return cumsum;
}