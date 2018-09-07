#include <iostream>

using namespace std;

int main() {
    int n, c = 0; // n = 123 -> 6, n = 3213 -> 9
    cin >> n;
    // n = 0
    // c = 0 + 3 + 2 + 1
    while (n > 0) {
        c += n % 10;
        n = n / 10;
    }
    cout << c;
    return 0;
}