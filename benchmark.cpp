#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

extern void setup(int64_t N, uint64_t A[]);
extern int64_t sum(int64_t N, uint64_t A[]);

/* The benchmarking program */
int main(int argc, char** argv) {
    std::cout << std::fixed << std::setprecision(2);

    // Define problem sizes
    const int64_t MAX_PROBLEM_SIZE = 1 << 28; // 256M
    std::vector<int64_t> problem_sizes{ MAX_PROBLEM_SIZE >> 5, MAX_PROBLEM_SIZE >> 4, MAX_PROBLEM_SIZE >> 3, MAX_PROBLEM_SIZE >> 2, MAX_PROBLEM_SIZE >> 1, MAX_PROBLEM_SIZE };

    std::vector<uint64_t> A(MAX_PROBLEM_SIZE);

    // Loop over problem sizes
    for (int64_t n : problem_sizes) {
        printf("Working on problem size N=%lld \n", n);

        // invoke user code to set up the problem
        setup(n, &A[0]);

        // Start timer
        auto start_time = std::chrono::high_resolution_clock::now();

        // invoke method to perform the sum
        int64_t result = sum(n, &A[0]);

        // End timer
        auto end_time = std::chrono::high_resolution_clock::now();

        // Calculate elapsed time
        std::chrono::duration<double> elapsed_seconds = end_time - start_time;

        // Print elapsed time for this problem size
        std::cout << "Elapsed time for problem size N=" << n << ": " << elapsed_seconds.count() << " seconds" << std::endl;

        printf(" Sum result = %lld \n", result);
    } // end loop over problem sizes

    return 0;
}