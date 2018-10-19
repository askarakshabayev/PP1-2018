#include <iostream>

using namespace std;
// 1 -> 2
// 1 -> 3
// 2 -> 3
// 1 -> 2
// 3 -> 1
// 3 -> 2
// 1 -> 2
void f(int n, int a, int b, int c) {
    if (n == 1) {
        cout << a << "->" << b << endl;
        return;
    }
    f(n - 1, a, c, b);
    cout << a << "->" << b << endl;
    f(n - 1, c, b, a);
}

int main() {
    int n;
    cin >> n;
    f(n, 1, 2, 3);
    return 0;
}