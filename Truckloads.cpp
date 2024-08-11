#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: all crates fit into one truck
    }
    
    int halfCrates = numCrates / 2;
    int remainingCrates = numCrates - halfCrates;

    // Recursive case: split the crates into two groups and calculate trucks for each
    return numTrucks(halfCrates, loadSize) + numTrucks(remainingCrates, loadSize);
}
