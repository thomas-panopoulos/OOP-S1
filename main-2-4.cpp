#include <iostream>
using namespace std;

extern bool is_ascending(int[], int);

int main() {
    int array[9] = {1,2,2,3,4,5,6,7,8};
    cout << is_ascending(array, 9);
    return 0;
}