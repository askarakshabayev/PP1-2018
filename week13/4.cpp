#include <iostream>

using namespace std;

struct Point {
    int x, y;
    Point(int _x, int _y) {
        x = _x; // _x = 2, _y = 3, a.x = 2
        y = _y; // a.y = 3
    }

    Point() {}

    Point(int _x) { 
        x = _x;
        y = _x; 
    }
};

int main() {
    Point a(2, 3);
    Point b(4, 5);
    Point c;
    cin >> c.x >> c.y;
    Point d(1);
    cout << a.x << " " << a.y << endl;
    cout << d.x << " " << d.y << endl;
    return 0;
}