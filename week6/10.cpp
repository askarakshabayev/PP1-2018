#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    k = k % n;
    // if (k > 0) {
    for (int i = 0; i < n; i++)
        b[(i + k + n) % n] = a[i];
    // } else {
    //     k = -k;
    //     for (int i = 0; i < n; i++) {
    //         int t = i - k;
    //         if (t < 0)
    //             t = t + n;
    //         b[t] = a[i];
    //     }
    // }

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}