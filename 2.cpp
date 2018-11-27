#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x, y;

    void read() {
        cin >> x >> y;
    }

    void print() {
        cout << x << " " << y << endl;
    }

    double dist(Point p) {
        int dx = x - p.x;
        int dy = y - p.y;
        return sqrt(dx * dx + dy * dy);
    }

    Point plus(Point p) {
        Point p1;
        p1.x = x + p.x;
        p1.y = y + p.y;
        return p1;
    }

};

int main() {
    Point a, b;
    a.read();
    b.read();
    // a.print();
    // b.print();
    double d = a.dist(b);
    Point c = a.plus(b);
    // cout << d << endl;
    c.print();
    return 0;
}