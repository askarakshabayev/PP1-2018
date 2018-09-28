#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // int a, b;
    // cin >> a >> b;
    // swap(a, b); // c = a, a = b, b = c
    // cout << a << " " << b;
    // i = 2
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 1)
            continue;
        cout << i << " "; // 0 2 4 6 8 .. 20
    }

    return 0;
}