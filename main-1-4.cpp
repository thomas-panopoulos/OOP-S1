extern void print_scaled(int[3][3], int);

int main() {
    int matrix[3][3] = {{1,2,3},
                        {1,2,3},
                        {1,2,3}};
    print_scaled(matrix, 2);
    return 0;
}