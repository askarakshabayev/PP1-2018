#include <iostream>

using namespace std;

int main() {
    int n, k, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k >> m;
    n++;
    for (int i = n - 1; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = m;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}