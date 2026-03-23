#include "algorithms.h"
#include <iostream>
using namespace std;

long long rCount = 0; 

int binaryRecursion(int n) {
    rCount++; 
    if (n <= 1) {
        return n;
    }
    return binaryRecursion(n - 1) + binaryRecursion(n - 2);
}
