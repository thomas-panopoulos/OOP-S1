extern void print_summed(int[3][3], int[3][3]);

int main() {
    int matrix1[3][3] = {{1,2,3},
                        {1,2,3},
                        {1,2,3}};

    int matrix2[3][3] = {{1,2,3},
                        {1,2,3},
                        {1,2,3}};
    print_summed(matrix1, matrix2);
    return 0;
}