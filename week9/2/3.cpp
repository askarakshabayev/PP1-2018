#include <iostream>

using namespace std;
// a = 24, b = 32
// gcd(24, 32)
// gcd(32, 24)
// gcd(24, 8)
int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    return gcd(b, a % b);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
    return 0;
}