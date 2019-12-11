#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a number: " << endl;
    string a, b;
    cin >> a;
    cout << "Enter another number: " << endl;
    cin >> b;
    double aa = 0, bb = 0;
    int na = a.size(), nb = b.size();
    cout << pow(10, 3);
    for (int i = 0; i < na; ++i) {
        aa += (a[i]-'0')*pow(10, na-1-i);
    }
    for (int j = 0; j < nb; ++j) {
        bb += (b[j]-'0')*pow(10, nb-j-1);
    }
    cout << "Long method: " << aa + bb << endl;
    aa = stoi(a);
    bb = stoi(b);
    cout << "short method " << aa + bb << endl;
    return 0;
}