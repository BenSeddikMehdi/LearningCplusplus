//
// Created by HP-EliteBook on 12/26/2019.
//

#include <limits>
#include "NumericLimits.h"

// Display region of data types
void numericLimits(const string& varType) {
    display("Min of ")
    display(varType)
    display(": ")
    display(numeric_limits<varType>::min())
}
