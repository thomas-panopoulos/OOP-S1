#include <iostream>

using namespace std;

extern int palindrome_sum(int[], int);

int main() {
    int array[6] = {1,2,3,3,2,1};
    cout << palindrome_sum(array, 6) << endl;
}