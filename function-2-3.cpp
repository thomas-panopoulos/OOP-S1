#include <iostream>
using namespace std;

void two_five_nine(int array[], int len) {
    if (len < 1) {
        cout << "2:0;5:0;9:0;" << endl;
    }
    else {
        int twos{0}, fives{0}, nines{0};
        for (int i = 0; i < len; i++) {
            switch (array[i]) {
                case 2:
                    twos += 1;
                    break;
                case 5:
                    fives += 1;
                    break;
                case 9:
                    nines +=1;
                    break;
                default:
                    break;
            }
        }
        cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";" << endl;
    }
}