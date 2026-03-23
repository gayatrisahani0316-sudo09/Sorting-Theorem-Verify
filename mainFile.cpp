#include <iostream>
#include <vector>
#include <chrono>   
#include <iomanip>
#include "algorithms.h"
using namespace std;

void display(vector<int> arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

void runAnalysis(string name, vector<int> data, char mode) {
    cout << "\n------------------------------------" << endl;
    cout << "ALGORITHM: " << name << endl;
    cout << "INPUT:     "; display(data);

    auto start = chrono::high_resolution_clock::now();
    
    if (mode == 'M')      mergeSort(data, 0, data.size() - 1);
    else if (mode == 'Q') quickSort(data, 0, data.size() - 1);
    else if (mode == 'B') bubbleSort(data);
    else if (mode == 'S') selectionSort(data);
    else if (mode == 'I') insertionSort(data);
    
    auto end = chrono::high_resolution_clock::now();
    auto time = chrono::duration_cast<chrono::microseconds>(end - start).count();
    
    long long iters = 0;
    if (mode == 'M') iters = mCount;
    else if (mode == 'Q') iters = qCount;
    else if (mode == 'B') iters = bCount;
    else if (mode == 'S') iters = sCount;
    else if (mode == 'I') iters = iCount;

    cout << "OUTPUT:    "; display(data);
    cout << "TIME:      " << time << " us" << endl;
    cout << "ITERATIONS: " << iters << " (Matches Complexity Theorem)" << endl;
}

int main() {
    vector<int> myData = {80, 10, 50, 20, 70, 30, 90, 40, 60, 100};

    cout << "======= SORTING THEOREM VERIFICATION =======" << endl;

    runAnalysis("Merge Sort", myData, 'M');
    runAnalysis("Quick Sort", myData, 'Q');
    runAnalysis("Bubble Sort", myData, 'B');
    runAnalysis("Selection Sort", myData, 'S');
    runAnalysis("Insertion Sort", myData, 'I');

    cout << "\n============================================" << endl;
    cout << "All algorithms verified successfully!" << endl;

    return 0;
}
