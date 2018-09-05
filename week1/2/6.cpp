#include <iostream>

using namespace std;

int main() {
    bool b; // true(1), false(0)
    int a, c;
    cin >> a >> c;
    b = (a % c == 0);
    cout << b;
    return 0;
}