//
// Created by HP-EliteBook on 12/16/2019.
//

#ifndef LEARNINGCPLUSPLUS_TESTBENCH_H
#define LEARNINGCPLUSPLUS_TESTBENCH_H

/***********************************/
/************ Vectors **************/
/***********************************/

using namespace std;
void manipulateVectors() {
    vector <uint16_t> randomVector(3);
    for (int i = 0; i < (int) randomVector.size(); ++i) {
        randomVector[i] = i*i + 1;
        printf("randomVector[%d] = %d\n", i, randomVector[i]);
    }
    randomVector.push_back(14);
    printf("the last item inside the vector: %d", randomVector[randomVector.size()-1]);
}

/***********************************/
/************ Strings **************/
/***********************************/


#endif //LEARNINGCPLUSPLUS_TESTBENCH_H
