#include <iostream>

using namespace std;

int f(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;
    return p;
}

int main() {
    int n, k;
    cin >> n >> k;
    int f1 = f(n);
    int f2 = f(k);
    int f3 = f(n - k);
    cout << f1 / (f2 * f3);
    return 0;
}