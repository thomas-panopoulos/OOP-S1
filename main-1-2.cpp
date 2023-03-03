#include <iostream>
using namespace std;

extern double array_mean(int[], int);


int main() {
    int array[4] = {1,2,3,4};
    cout << "The average is: " << array_mean(array, 4) << endl;
    return 0;
}