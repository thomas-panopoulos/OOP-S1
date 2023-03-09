#include <iostream>

using namespace std;

extern int binary_to_int(int[], int);

int main() {
    int array[2] = {1,1};
    cout << binary_to_int(array, 2) << endl;
    return 0;
}