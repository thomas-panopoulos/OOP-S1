#include <iostream>
using namespace std;

extern int count_evens(int);

int main() {
    int topSlice{};
    cout << "choose the top end of the filter:" << endl;
    cin >> topSlice;
    cout << "the amount of even numbers between 1 and " << topSlice << " is: " << count_evens(topSlice);
    return 0;
}