#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b; // a = 5 b = 6
    // Wrong
    // a = b; // a = 6, b = 6
    // b = a; // a = 6, b = 6

    c = a;
    a = b;
    b = c;
    cout << a << " " << b;
    return 0;
}