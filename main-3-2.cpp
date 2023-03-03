#include <iostream>
using namespace std;

extern int median_array(int[], int);

int main() {
    int array[5] = {5,7,4,6,2};
    cout << median_array(array, 5);
    return 0;
}