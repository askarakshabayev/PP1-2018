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
};

int main() {
    Point a, b;
    a.read(); // cin >> a.x >> a.y
    b.read(); // cin >> b.x >> b.y
    a.print();
    b.print();
    double d = b.dist(a);
    cout << d;
    return 0;
}