int max_element(int array[], int len ) {
    int lastElement{array[0]};
    for (int i=0; i<len; i++) {
        if (array[i] > lastElement) {
            lastElement = array[i];
        }
    }
    return lastElement;
}