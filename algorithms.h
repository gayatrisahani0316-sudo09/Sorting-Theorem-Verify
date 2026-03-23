#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

extern long long mCount, qCount, bCount, sCount, iCount, rCount;

void mergeSort(vector<int>& arr, int l, int r);
void quickSort(vector<int>& arr, int low, int high);
void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
int binaryRecursion(int n);

#endif
