#include <iostream>

using namespace std;

int main() {
    int a, b; // gcd(24, 32) = 8
    cin >> a >> b;
    while (a > 0 && b > 0) {
        if (a >= b)
            a = a % b;
        else
            b = b % a;
    }
    cout << a + b;
    return 0;
}