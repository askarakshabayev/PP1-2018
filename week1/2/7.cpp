#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    bool t;
    cin >> a >> b >> c;
    t = ((a == b) and (a == c));
    cout << t;
    return 0;
}