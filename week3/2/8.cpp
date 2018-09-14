// N, a1, a2, a3, ..., aN
// sum_even - sum_odd
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            sum_even += a[i];
        else
            sum_odd += a[i];
    }
    cout << sum_even - sum_odd;
    return 0;
}