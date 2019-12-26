#include <iostream>
#include <limits>
#include "NumericLimits.h"

using namespace std;
#define display(msg) cout<<msg<<endl;

int main() {
    display("Min of int: ")
    display(numeric_limits<int>::min())
    return 0;
}