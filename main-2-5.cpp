#include <iostream>
using namespace std;

extern bool is_descending(int[], int);

int main() {
    int array[9] = {8,8,7,6,5,4,3,2,1};
    cout << is_descending(array, 9);
    return 0;
}