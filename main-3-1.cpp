#include <iostream>
using namespace std;
extern bool is_fanarray(int[], int);

int main() {
    int array[5] = {1,2,3,2,1};
    cout << is_fanarray(array, 5);
    return 0;
}