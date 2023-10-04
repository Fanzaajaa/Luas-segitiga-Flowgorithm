#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int luas;
    int alas;
    int tinggi;

    cin >> alas;
    cin >> tinggi;
    luas = (int) (alas * tinggi * 0.5);
    cout << luas << endl;
    return 0;
}
