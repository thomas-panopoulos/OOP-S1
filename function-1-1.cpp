#include <iostream>
using namespace std;

void print_matrix(int matrix[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}