#include <iostream>
using namespace std;

extern int array_sum(int[], int);


int main() {
    
    int array[5] = {4,5,6,7,8};
    cout << "The total is: " << array_sum(array, 5) << endl;
    return 0;
}