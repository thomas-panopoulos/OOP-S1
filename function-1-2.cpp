#include <iostream>
using namespace std;
int is_identity(int array[10][10]) {

    for (int i = 0; i < 10; i++) {
        if (array[i][i] != 1) {
            return 0;
        }
        for (int j = i+1; j < 10; j++) {
            if (array[i][j] != 0) {
                return 0;
            }
        }
        for (int k = i-1; k > 0; k--) {
            if (array[i][k] != 0) {
                return 0;
            }
        }
    }
    return 1;
}