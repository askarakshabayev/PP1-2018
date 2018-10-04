#include <iostream>

using namespace std;

int maxi(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    int c, d;
    cin >> c >> d;
    int t = maxi(c, d);
    int k, l;
    cin >> k >> l;
    int p = maxi(k, l);
    cout << p;
    cout << t;

    return 0;
}