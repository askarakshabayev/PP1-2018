#include <iostream>

using namespace std;

struct Point {
    int x, y;

    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }

    Point() {}

    Point(int _x) {
        x = _x;
        y = _x;
    }

    void read() {
        cin >> x >> y;
    }

    void print() {
        cout << x << " " << y;
    }
};

int main() {
    Point a(1, 2);
    Point b;
    Point c(1);
    return 0;
}