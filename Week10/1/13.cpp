#include <iostream>

using namespace std;
// 1 2 3 0
int f() {
    int x;
    cin >> x;
    if (x == 0)
        return 0;
    return x + f();
}

int main() {
    cout << f();
    return 0;
}