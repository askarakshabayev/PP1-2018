#include <iostream>

using namespace std;

int main() {
    pair<int, int> a;
    int x, y;
    cin >> x >> y;
    // a.first = x;
    // a.second = y; // (x, y)
    a = make_pair(x, y);
    cout << a.first << " " << a.second;
    return 0;
}