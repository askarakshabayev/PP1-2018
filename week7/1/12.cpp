#include <iostream>

using namespace std;

bool isPrime(int k) {
    int p = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            p++;
    if (p == 2)
        return true;
    return false;
    // return p == 2;
}

int main() {
    int n, x;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (isPrime(x) == true)
            cnt++;
    }
    cout << cnt;

    return 0;
}