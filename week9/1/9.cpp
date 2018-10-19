#include <iostream>

using namespace std;
int n, x;
int a[1000];
// 5
// 1 2 3 4 5

// bool f(int k, int x) {
//     if (k == n - 1)
//         return (a[k] == x);
//     return (a[k] == x) | f(k + 1, x);
// }

bool f(int x, int l, int r) { // l = 5, r = 6
    if (r == l || r - l == 1)
        return (a[l] == x) or (a[r] == x);
    int m = (l + r) / 2;
    if (a[m] <= x)
        return f(x, l, m);
    else
        return f(x, m + 1, r);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    if (f(x, 0, n - 1) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}