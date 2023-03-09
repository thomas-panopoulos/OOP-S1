#include <numeric>
#include <algorithm>
#include <string>
using namespace std;

bool is_palindrome(int array[], int len) {
    if (len < 1) {
        return false;
    }
    else {
        int array2[len] = {};
        memcpy(array2, array, len * sizeof(int));
        reverse(array2, array2+len);
        for (int i = 0; i < len; i++) {
            if (array2[i] != array[i]) {
                return false;
            }
        }
        return true;
    }
}

int sum_array_elements(int array[], int len) {
    if (len < 1) {
        return -1;
    } 
    else {
        int cumsum{};
        cumsum = accumulate(array, array + len, cumsum);
        return cumsum;
    }
}

int sum_if_palindrome(int array[], int len) {
    if (is_palindrome(array, len) == true) {
        return sum_array_elements(array, len);
    }
    else {
        return -2;
    }
}