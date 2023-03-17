#include <algorithm>
#include <cstring>
#include <numeric>
using namespace std;

int sum_integers(int array[], int len) {
    int cumsum{};
    cumsum = accumulate(array, array+len, cumsum);
    return cumsum;
}

bool is_array_palindrome(int array[], int len) {
    int temp[len];
    memcpy(temp, array, len*sizeof(int));
    reverse(temp, temp+len);
    for (int i = 0; i < len; i++) {
        if (temp[i] != array[i]) {
            return false;
        }
    }
    return true;
}

int palindrome_sum(int array[], int len) {
    if (len < 1) {
        return -1;
    }
    else if (is_array_palindrome(array, len) == false) {
        return -2;
    }
    else {
        return sum_integers(array,len);
    }
}