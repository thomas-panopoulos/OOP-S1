#include <iostream>
using namespace std;

extern int sum_min_max(int[], int);

int main() {
    int array[4] = {1,2,3,4};
    cout << sum_min_max(array, 4) << endl;
    return 0;
}