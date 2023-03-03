//seudo code
//decide length of new arrays, for even original array length = arraylength/2, otherwise int arraylength/2 
//as int trunicates decimal points
//iterate both arrays from both directions of array
//then find if the middle value (2 if even) is higher than the surrounding numbers on each side by counting from each end (length/-length)
#include <iostream>
using namespace std;

bool is_fanarray(int array[], int len) {
    bool isOdd{};
    int length{len/2};
    int arrL[length] = {}, arrR[length] = {};
    
    if (len % 2 ==0) {
        isOdd = false;
    }
    else {
        isOdd = true;
    }

    for (int i = 0, j=len-1; i < length && j > length; i++, j--) {
        arrL[i] = array[i];
        arrR[i] = array[j];
        
        if (arrL[i] != arrR[i]) {
            return false;
        }
    }

    switch(isOdd) {
        case true:
            if (array[length-1] = array[-length+1] && array[length-1] < array[length]) {
                return true;
            }
            else {
                return false;
            }
            break;
        case false:
            if (array[length] = array[-length]) {
                return true;
            }
            else {
                return false;
            }
    }
    return false;
}