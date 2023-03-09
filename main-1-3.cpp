extern void count_digits(int[4][4]);

int main() {
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,0,1,2},
                        {3,1,5,1}};
    count_digits(matrix);
    return 0;
}