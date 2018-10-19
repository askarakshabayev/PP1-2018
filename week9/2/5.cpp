#include <iostream>

using namespace std;

int a[1000];

int f(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (a[n] > 0)
        return a[n];
    a[n] = f(n - 1) + f(n - 2);
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}