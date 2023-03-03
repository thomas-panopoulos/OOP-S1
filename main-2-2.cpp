#include <iostream>
using namespace std;

extern int max_element(int[], int);

int main() {
    int array[6] = {4,5,6,7,8,3};
    cout << "The max element is: " << max_element(array, 6);
    return 0;
}