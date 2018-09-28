#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = (int)sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            cout << i << " " << n / i;
            break;
        }
    }
    return 0;
}