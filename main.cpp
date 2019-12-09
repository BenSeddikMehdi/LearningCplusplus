#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Hola Amigos" << endl;
    cout << "Min of int " << numeric_limits <unsigned int>::min() << endl;
    cout << "Max of int " << numeric_limits <unsigned int>::max() << endl;

    return 0;
}