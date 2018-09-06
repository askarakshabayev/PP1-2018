#include <iostream>

using namespace std;

int main() {
    // break; continue;
    int n;
    cin >> n; // 7
    int cnt = 0; // cnt = 2
    for (int i = 1; i <= n; i++) { // i = 3
        if (n % i == 0) {
            cnt++;
            if (cnt > 2) {
                break;
            }
        }
    }
    // cout << cnt;
    if (cnt == 2) {
        cout << "yes";
    } else {
        cout << "no";
    }

    // if (n == 1) {
    //     cout << "no";
    // } else if (n == 2) {
    //     cout << "yes";
    // } else {
    //     bool prime = true; // prime = true
    //     for (int i = 2; i < n; i++) { // n = 9
    //         if (n % i == 0) { // i = 3
    //             prime = false;
    //         }
    //     }
    //     if (prime == true) {
    //         cout << "yes";
    //     } else {
    //         cout << "no";
    //     }
    // }
    return 0;
}