#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool f1 = a + b > c;
    bool f2 = a + c > b;
    bool f3 = b + c > a;
    // f1 = 1
    // f2 = 0
    // f3 = 1
    // (1 and 0) and 1 = true, false
    if (f1 && f2 && f3) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}