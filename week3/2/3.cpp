// N = 60: 1 4 9 16 25 36 49
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // 60
    int k = 1; // 1 2 3 4 .. 8
    while (k * k <= n) {
        cout << k * k << " ";
        k++;
    } // 1 4 ... 49
    return 0;
}