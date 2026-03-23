#include "algorithm.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long bCount = 0;

void bubbleSort(vector<int>& arr){
  int n = arr.size();
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n - i - 1; j++){
      bCount++;
      if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
  }
}
