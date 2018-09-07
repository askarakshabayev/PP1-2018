#include <iostream>

using namespace std;

int main() {
    // int a, b;
    // cin >> a >> b;
    // for (int i = a; i <= b; i++) {
    //     if (i % 3 == 0) {
    //         cout << i << " ";
    //     }
    // }

    int n, c = 0;
    cin >> n;
    // n = 12 => 1,2,3,4,6,12
    // n = 12
    // i = 13
    // c = 6
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            c++;
        }
    }
    cout << endl << c;
    return 0;
}