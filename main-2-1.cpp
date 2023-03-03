#include <iostream>
using namespace std;

extern int min_element(int[], int);

int main() {
    int array[6] = {4,5,6,7,8,3};
    cout << "The minimum element is: " << min_element(array, 6);
    return 0;
}