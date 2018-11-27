#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;

    Point() {}
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }

    void read() {
        cin >> x >> y;
    }

    void print() {
        cout << x << " " << y << endl;
    }

    Point operator + (Point p) {
        Point c;
        c.x = x + p.x;
        c.y = y + p.y;
        return c;
    } 

    bool operator < (Point p) {
        if (x < p.x)
            return true;
        if (x == p.x && y < p.y)
            return true;
        return false;
    }

    bool operator > (Point p) {
        if (x > p.x)
            return true;
        if (x == p.x && y > p.y)
            return true;
        return false;
    }

};

int main() {
    Point a(1, 2), b(2, 3);
    // Point c = a + b + a + b;
    // c.print();
    // if (a < b) {
    //     cout << "Yes";
    // } else {
    //     cout << "No";
    // }

    vector<Point> v;
    v.push_back(a);
    v.push_back(b);

    // sort(v.begin(), v.end());
    return 0;
}