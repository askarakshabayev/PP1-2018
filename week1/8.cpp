#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Example 1 - sqrt
    // int a, b;
    // double c;
    // cin >> a >> b;
    // c = sqrt(a * a + b * b);
    // cout << c;

    // Example 2 - abs
    // int a;
    // cin >> a;
    // cout << abs(a);

    // Example 3 - sin
    // int a;
    // cin >> a;
    // double rad = a * M_PI / 180;
    // cout << sin(rad);

    // Example 4 - min, max
    int a, b, c;
    cin >> a >> b >> c;
    int d = max(a, b);
    cout << max(d, c);
    return 0;
}