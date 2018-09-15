#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1;
    // while ((1 << k) <= n) {
    //     cout << (1 << k) << " ";
    //     k++;
    // }
    while (k <= n) {
        cout << k << " ";
        k *= 2;
    }
    return 0;
}