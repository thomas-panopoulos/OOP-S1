#include <numeric>
using namespace std;

int array_sum(int array[], int len) {
    int sum{};
    sum = accumulate(array, array+len, sum);
    return sum;
}