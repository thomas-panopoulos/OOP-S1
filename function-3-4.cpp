#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch(grade) {
        case 'A':
            cout << "pass" << endl;
            break;
        case 'B':
            cout << "pass" << endl;
            break;
        case 'C':
            cout << "pass" << endl;
            break;
        case 'D':
            cout << "fail" << endl;
            break;
        case 'E':
            cout << "fail" << endl;
            break;
    }
}