#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 3 == 0 || a[i] % 5 == 0 || a[i] % 7 == 0)
            sum += a[i];
    }
    cout << sum;

    return 0;
}