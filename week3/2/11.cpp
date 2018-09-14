// N, a1, a2, ..., aN k
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    n--;
    for (int i = k; i < n; i++) {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}