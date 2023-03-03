#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
double weighted_average(int array[], int len) {
    map<int, int> weight;
    double weightedAvg = {0};
    for (int i = 0; i < len; i++) {
        if (!weight[array[i]]) {
            weight[array[i]] = 1;
        }else {
            weight[array[i]] += 1;
        }
    }
    for (auto item : weight) {
        weightedAvg += item.first * item.second * item.second;
    }
    return weightedAvg/len;
}