#include <iostream>

using namespace std;

int main() {
    int n, k0 = 0, k1 = 0;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0)
            k0++;
        else
            k1++;
        n >>= 1; // n = n >> 1;
    }
    cout << k0 << " " << k1;
    return 0;
}