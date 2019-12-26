#include <iostream>
#include <limits>

using namespace std;
#define display(msg) cout<<msg<<endl;

int main() {
    uint16_t arrayNum[3][2][2] = {{{1, 2}, {3, 4}}
                                 ,{{5, 6}, {7, 8}}
                                 ,{{9, 8}, {7, 6}}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("array[%d][%d][%d] = %d\n", i, j, k, arrayNum[i][j][k]);
            }
        }
    }
    return 0;
}