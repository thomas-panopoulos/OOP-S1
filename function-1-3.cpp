#include <map>
#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    map<int, int>values;
    /*for (int i = 0; i < 9; i++) {
        if (!values[i]) {
            values[i] = 0;
        }
    }*/
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] < 10) {
                if(!values[array[i][j]]) {
                    values[array[i][j]] = 1;
                }
                else {
                    values[array[i][j]] += 1;
                }

            }
        }

    }
    for (int i = 0; i < 10; i++) {
        int exist = (values[i]) ? values.at(i) : 0;
        cout << i << ':' << exist << ';';
    }
}