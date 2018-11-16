#include <iostream>

using namespace std;
int n, x;

int main() {
    int n = 0;
    while (cin >> x) {
        if (x != 0)
            cout << x << " ";
        else
            n++;
    }
    for (int i = 0; i < n; i++)
        cout << 0 << " ";
    return 0;
}