#include <iostream>

using namespace std;

int main() {
    int f1, f2, f3;
    f1 = 0;
    f2 = 1;

    int n;
    cin >> n;
    if (n == 1)
        cout << 0;
    else if (n == 2)
        cout << 1;
    else {
        for (int i = 3; i <= n; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        cout << f3;
    }
    return 0;
}