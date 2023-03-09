#include <string>
#include <iostream>
using namespace std;

int main() {
    int num{};
    string str{};
    cout << "pick a number to be converted" << endl;
    cin >> num;
    cout << num << endl;
    while (num > 0) {
        if (num % 2 == 0) {
            str.insert(str.begin(), '0');
        }
        else {
            str.insert(str.begin(), '1');
        }
        num >>= 1;
    }
    cout << str << endl;
    return 0;
}
