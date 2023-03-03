#include <numeric>
using namespace std;

int sum_two_arrays(int arr1[], int arr2[], int len) {
    int total{}, sum1{}, sum2{};
    sum1 = accumulate(arr1, arr1+len, sum1);
    sum2 = accumulate(arr2, arr2+len, sum2);
    total = sum1+sum2;
    return total;

}