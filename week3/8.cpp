// 1 <= N <= 100, a0, a1, a2, ..., aN
// a0, a1, ..., aN
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i+=2) {
        sum += a[i];
    }
    cout << sum;

    return 0;
}