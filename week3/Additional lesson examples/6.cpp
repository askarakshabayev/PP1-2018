#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k, k1, k2;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        k = i;
        k2 = k;
        k1 = 0;
        while (k > 0) {
            k1 = k1 * 10 + k % 10;
            k = k / 10;
        }
        if (k2 == k1)
            cnt++;
    }
    cout << cnt;
    return 0;
}