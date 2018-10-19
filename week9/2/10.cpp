#include <iostream>

using namespace std;
int n;
int a[1000];

bool f(int l, int r, int x) {
    if (l == r || r - l == 1) {
        return (a[l] == x) || (a[r] == x);
    }
    int m = (l + r) / 2;
    if (a[m] < x) {
        return f(m + 1, r, x);
    } else {
        return f(l, m, x);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    if (f(0, n - 1, x) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}