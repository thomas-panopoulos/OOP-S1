using namespace std;

bool is_descending(int array[], int len) {
    int prevEle{array[0]};
    if (len < 1) {
        return false;
    }
    for (int i = 1; i < len; i++) {
        if (array[i] > prevEle) {
            return false;
        }
        else {
         prevEle = array[i];
        }
    }
    return true;
}