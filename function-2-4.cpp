#include <numeric>
#include <algorithm>
using namespace std;
int sum{};

int array_min(int array[], int len) {
    sort(array, array+len);
    return array[0];
}

int array_max(int array[], int len) {
    sort(array, array+len, greater<int>());
    return array[0];
}

int sum_min_max(int array[], int len) {
    if (len < 1) {
        return -1;
    }
    else {
        sum = array_max(array, len) + array_min(array, len);
        return sum;
    }
}