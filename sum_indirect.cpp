#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void setup(int64_t N, uint64_t A[]) {
    // fill the array with numbers from 1 to N
    for (int64_t i = 0; i < N; ++i) {
        A[i] = i + 1;
    }
}

int64_t sum(int64_t N, uint64_t A[]) {
    int64_t total = 0;
    // just accumulate all elements of the array
    for (int64_t i = 0; i < N; ++i) {
        total += A[i];
    }
    return total;
}

