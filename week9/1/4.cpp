#include <iostream>

using namespace std;
// a = 2, b = 3
// f(2, 3)
int f(int x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    return f(x, n - 1) * x;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}