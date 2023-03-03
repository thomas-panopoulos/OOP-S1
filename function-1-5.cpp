int count_evens(int num) {
    int total_evens{0};
    for (int i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            total_evens += 1;
        }
    }
    return total_evens;
}