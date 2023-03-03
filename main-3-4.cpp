#include <iostream>
using namespace std;

extern int print_pass_fail(char);

int main() {
    char character = 'A';
    print_pass_fail(character);
    return 0;
}