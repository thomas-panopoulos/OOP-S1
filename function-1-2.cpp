#include <numeric>
using namespace std;

double array_mean(int array[], int len) {
    double avg{0}, sum{0};
    sum = accumulate(array, array+len, sum);
    avg = sum / len;
    return avg;
}