#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch(grade) {
        case 'A':
            cout << "pass";
            break;
        case 'B':
            cout << "pass";
            break;
        case 'C':
            cout << "pass";
            break;
        case 'D':
            cout << "fail";
            break;
        case 'E':
            cout << "fail";
            break;
    }
}