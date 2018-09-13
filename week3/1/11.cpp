// 25 111 13 3 6
// 2
// 25 13 3 6
#include <iostream>

using namespace std;

int main() {
    int n, k, m;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k >> m;
    n++;
    for (int i = n - 1; i >= k; i--) {
        a[i] = a[i - 1];
    }

    a[k - 1] = m;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}