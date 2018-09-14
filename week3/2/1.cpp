// 1 <= N <= 2 ^ 32: N = 122213
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c_1 = 0, c_2 = 0;
    while (n > 0) {
        int k = n % 10;
        if (k == 1)
            c_1++;
        if (k == 2) 
            c_2++;
        n /= 10; // n = n / 10
    }
    cout << c_1 << " " << c_2;
    return 0;
}