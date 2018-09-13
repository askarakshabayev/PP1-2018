// N < 2 ^ 64 
#include <iostream>

using namespace std;

int main() {
    int n; // n = 123
    int c_0 = 0, c_1 = 0;
    cin >> n;
    while (n > 0) {
        if (n % 10 == 0)
            c_0++;
        if (n % 10 == 1)
            c_1++;
        n /= 10;
    }
    cout << c_0 << " " << c_1;
    return 0;
}