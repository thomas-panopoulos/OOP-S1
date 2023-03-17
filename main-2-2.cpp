#include <iostream>

using namespace std;

extern int bin_to_int(int[], int);

int main() {
    int array[6] = {1,1,1,0,0,1};
    cout << bin_to_int(array, 6) << endl;
    return 0;
}