#include <iostream>

using namespace std;

int f(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    return x * f(x, n - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}