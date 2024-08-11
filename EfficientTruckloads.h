#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <map>

class EfficientTruckloads {
public:
    int numTrucks(int numCrates, int loadSize);

private:
    std::map<std::pair<int, int>, int> memo;
};

#endif
