using namespace std;

int num_count(int array[], int len, int num) {
    int total{0};
    for (int i = 0; i < len; i++){
        if (array[i] == num) {
            total += 1;
        }
    }
    return total;
}