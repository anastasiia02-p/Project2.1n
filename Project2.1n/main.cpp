#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alpha;
    cin >> alpha;

    double z1 = (sin(4 * alpha) / (1 + cos(4 * alpha))) * (cos(2 * alpha) / (1 + cos(2 * alpha)));
    double z2 = 1. / tan((3.0 / 2) * 4 - alpha);

    cout << z1 << endl;
    cout << z2 << endl;

    return 0;
}
