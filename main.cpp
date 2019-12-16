#include <iostream>
#include <limits>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    vector <uint16_t> randomVector(3);
    for (int i = 0; i < (int) randomVector.size(); ++i) {
        randomVector[i] = i*i + 1;
        printf("randomVector[%d] = %d\n", i, randomVector[i]);
    }
    randomVector.push_back(14);
    printf("the last item inside the vector: %d", randomVector[randomVector.size()-1]);
    return 0;
}