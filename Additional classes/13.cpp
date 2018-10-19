#include <iostream>

using namespace std;

int a;

void f() {
    a = 3;
    cout << a << " ";
}
// a = 3
int main() {
    // a = 2;
    // f();
    // cout << a << " ";
    // b = 2
    int b = 2;
    if (true) {
        // b = 3
        int b = 3;
        cout << b;
    }
    cout << b;
    return 0;
}