// f(n) = f(n - 1) + f(n - 2)
// n = 0 => 0
// n = 1 => 1
// 0, 1, 1, 2, 3, 5, 8, 13 ...

#include<iostream>

using namespace std;
int a[1000];

int f(int n) {
    if (n > 1 && a[n] > 0)
        return a[n];
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    a[n] = f(n - 1) + f(n - 2);
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}