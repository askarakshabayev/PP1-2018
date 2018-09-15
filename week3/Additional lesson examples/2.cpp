#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 0;
    int k = 3;
    for (int i = 0; i < 4; i++) {
        if (n % 2 != 0)
            r += (1 << k);
        n = n >> 1;
        k--;
    }
    cout << r;
    return 0;
}