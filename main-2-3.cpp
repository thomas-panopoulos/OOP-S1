#include <iostream>
using namespace std;

extern int sum_if_palindrome(int[], int);

int main() {
    int array[2] = {1,2};
    cout << sum_if_palindrome(array, 2) << endl;
    return 0;
}