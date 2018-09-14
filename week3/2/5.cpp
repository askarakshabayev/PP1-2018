// N = 20 (10100) => 2, N = 10 => 1, N = 3 (11) => 0
#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    // while ((n & 1) == 0) {
    //     k++;
    //     n >>= 1; // n = n >> 1;
    // }
    // cout << k;
    
    while (n % 2 == 0) {
        k++;
        n = n / 2;
    }
    cout << k;
    return 0;
}