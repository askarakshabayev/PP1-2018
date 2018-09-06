#include <iostream>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    cout << (n | (1 << b));
    return 0;
}