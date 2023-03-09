#include <map>
#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    map<int, int>values;
    for (int i = 0; i < 9; i++) {
        if (!values[i]) {
            values[i] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] < 10) {
                values[array[i][j]] += 1;
            }
        }

    }
    cout << "0:" << values.at(0) << ";1:" << values.at(1) << ";2:";
    cout << values.at(2) << ";3:" << values.at(3) << ";4:";
    cout << values.at(4) << ";5:" << values.at(5) << ";6:";
    cout << values.at(6) << ";7:" << values.at(7) << ";8:";
    cout << values.at(8) << ";9:" << values.at(9) << ';' << endl;
}