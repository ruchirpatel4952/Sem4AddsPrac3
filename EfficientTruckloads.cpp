#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: all crates fit into one truck
    }

    std::pair<int, int> key = {numCrates, loadSize};

    if (memo.find(key) != memo.end()) {
        return memo[key]; // Return cached result if available
    }

    int halfCrates = numCrates / 2;
    int remainingCrates = numCrates - halfCrates;

    // Recursive case: split the crates into two groups and calculate trucks for each
    int result = numTrucks(halfCrates, loadSize) + numTrucks(remainingCrates, loadSize);
    memo[key] = result; // Store the result for future use

    return result;
}
