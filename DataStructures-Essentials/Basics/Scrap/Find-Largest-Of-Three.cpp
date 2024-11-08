#include <iostream>
using namespace std;
template <typename T>
T findLargest(T a, T b, T c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << findLargest(a, b, c) << " is the largest integer" << endl;

    double x, y, z;
    cout << "Enter three floating-point numbers: ";
    cin >> x >> y >> z;
    cout << findLargest(x, y, z) << " is the largest floating-point number" << endl;

    char p, q, r;
    cout << "Enter three characters: ";
    cin >> p >> q >> r;
    cout << findLargest(p, q, r) << " is the largest character" << endl;

    return 0;
}
