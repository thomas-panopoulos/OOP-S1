#include <string>
#include <iostream>

using namespace std;

void print_binary_string(string decimal) {
    int num{};
    string solution{};
    num = stoi(decimal);
    while (num > 0) {
        if (num % 2 == 0) {
            solution.insert(solution.begin(), '0');
        }
        else {
            solution.insert(solution.begin(), '1');
        }
        num >>= 1;
    }
    cout << to_string(solution) << endl;
}