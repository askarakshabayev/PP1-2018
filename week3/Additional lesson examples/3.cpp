#include <iostream>

using namespace std;

int main() {
    int n, a, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        while (a > 0) {
            if (a % 10 == 0)
                k++;
            a /= 10;
        }
    }


    cout << k;
    return 0;
}