// N = 5, 1 * 2 * 3 * 4 * 5 = 120
#include <iostream>

using namespace std;

int main() {
    int n, k = 1, f = 1;
    cin >> n;
    // while (k <= n) {
    //     f *= k; // f = f * k
    //     k++;
    // }
    for (int i = 1; i <= n; i++)
        f *= i;
    cout << f;
    return 0;
}