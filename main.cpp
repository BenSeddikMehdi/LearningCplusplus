#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Enter a number: " << endl;
    string a, b;
    cin >> a;
    cout << "Enter another number: " << endl;
    cin >> b;
    int aa = 0, bb = 0;
    aa = stoi(a);
    bb = stoi(b);
    cout << aa + bb << endl;
    return 0;
}