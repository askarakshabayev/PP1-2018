// N = 60, 1, 4, 9, 16, 25, 36, 49
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1;
    while (k * k <= n) {
        cout << k * k << " "; // 1 4 9 ...
        k++;
    }
    // n = 60
    // k = 2

    return 0;
}