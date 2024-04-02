#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

// Function declarations
void setup(int64_t N, uint64_t A[]);
int64_t sum(int64_t N, uint64_t A[]);

// Constants for the theoretical peak memory bandwidth and performance of system
const double PEAK_MEMORY_BANDWIDTH_GB_PER_S = 204.8; // Bandwidth per CPU in GB/s
const int NUM_CPUS = 2; // Number of CPUs

// compute memory bandwidth utilization percentage
double computeMemoryBandwidthPercentage(int64_t N, double seconds) {
    // Each uint64_t is 8 bytes, so the total bytes processed is 8 * N.
    // Convert seconds to nanoseconds
    double utilizedBandwidthGBPerS = ((8.0 * N) / (seconds * 1e9));
    double peakBandwidthGBPerS = PEAK_MEMORY_BANDWIDTH_GB_PER_S * NUM_CPUS; // Total for both CPUs
    return (utilizedBandwidthGBPerS / peakBandwidthGBPerS) * 100.0;
}

// Function to compute estimated memory latency in nanoseconds
double computeMemoryLatency(int64_t N, double seconds) {
    // Convert seconds to nanoseconds and divide by N
    return (seconds * 1e9) / N;
}

int main(int argc, char** argv) {
    std::cout << std::fixed << std::setprecision(2);

    // Define problem sizes
    const int64_t MAX_PROBLEM_SIZE = 1 << 28; // 256M
    std::vector<int64_t> problem_sizes{
        MAX_PROBLEM_SIZE >> 5,
        MAX_PROBLEM_SIZE >> 4,
        MAX_PROBLEM_SIZE >> 3,
        MAX_PROBLEM_SIZE >> 2,
        MAX_PROBLEM_SIZE >> 1,
        MAX_PROBLEM_SIZE
    };

    std::vector<uint64_t> A(MAX_PROBLEM_SIZE);

    // Loop over problem sizes
    for (int64_t n : problem_sizes) {
        std::cout << "Working on problem size N=" << n << std::endl;

        // invoke user code to set up the problem
        setup(n, A.data());

        // Start timer
        auto start_time = std::chrono::high_resolution_clock::now();

        // invoke method to perform the sum
        int64_t result = sum(n, A.data());

        // End timer
        auto end_time = std::chrono::high_resolution_clock::now();

        // Calculate elapsed time in seconds
        std::chrono::duration<double> elapsed_seconds = end_time - start_time;
        double elapsed_time_seconds = elapsed_seconds.count();

        // Compute and print the % of memory bandwidth used
        double memBandwidthPct = computeMemoryBandwidthPercentage(n, elapsed_time_seconds);
        std::cout << "Memory Bandwidth Utilization for problem size N=" << n << ": " << memBandwidthPct << "%" << std::endl;

        // Compute and print the estimated memory latency in nanoseconds
        double memLatency = computeMemoryLatency(n, elapsed_time_seconds);
        std::cout << "Estimated Memory Latency for problem size N=" << n << ": " << memLatency << " nanoseconds" << std::endl;

        // Print elapsed time and result for this problem size
        std::cout << "Elapsed time for problem size N=" << n << ": " << elapsed_time_seconds << " seconds" << std::endl;
        std::cout << "Sum result = " << result << std::endl;
    }

    return 0;
}