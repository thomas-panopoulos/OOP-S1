#include <iostream>
using namespace std;

extern int sum_two_arrays(int[], int[], int);

int main() {
    int arr1[5] = {4,5,6,7,8};
    int arr2[5] = {4,5,6,7,8};
    cout << "the sum of the elements within both arrays is: " << sum_two_arrays(arr1, arr2, 0);
    return 0;
}