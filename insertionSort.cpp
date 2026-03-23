#include "algorithms.h"
#include <iostream>
#include <vector>
using namespace std;

long long iCount = 0;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            iCount++;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
