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
        A[i] = i;
    }
}

int64_t sum(int64_t N, uint64_t A[]) {
    
    return std::accumulate(A, A + N, static_cast<uint64_t>(0));
}

