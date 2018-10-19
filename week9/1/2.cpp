#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1 || n == 0)
        return 1;
    return f(n - 1) * n;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}