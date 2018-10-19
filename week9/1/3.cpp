#include <iostream>

using namespace std;

// a = 32, b = 24
// gcd(24, 32) -> a = 24, b = 32
// gcd(32, 24)
// gcd(24, 8)
// gcd(8, 0) = 8
int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    return gcd(b, a % b);
}

int main() {
    int a, b; // a = 24, b = 32
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}