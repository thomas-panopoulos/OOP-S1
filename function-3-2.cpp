#include <algorithm>
using namespace std;

int median_array(int array[], int len) {
    int median{0};
    if (len % 2 == 0 || len < 1) {
        return 0;
    }
    else {
        sort(array, array+len);
        median = array[len/2];
    }
    return median;
}