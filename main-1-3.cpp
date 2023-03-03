#include <iostream>
using namespace std;

extern int num_count(int[], int, int);


int main() {
    int array[6] = {4,4,5,6,7,8};
    int elementToCount{4};
    cout << "The total number of " << elementToCount << " in the array is: " << num_count(array, 6, elementToCount) << endl;
    return 0;
}