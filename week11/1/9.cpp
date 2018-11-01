#include <iostream>
#include <algorithm>

using namespace std;

int f(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}

bool gr(int a, int b) {
    if (f(a) < f(b))
        return true;
    if (f(a) > f(b))
        return false;
    return a < b;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, gr);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}