#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y, z, k;
    Point(int _k) {
        k = _k;
    }
    void read() {
        cin >> x >> y >> z;
    }
};

int n;
vector<Point> points;

bool f(Point a, Point b) {
    int sum_a = a.x + a.y + a.z;
    int sum_b = b.x + b.y + b.z;

    if (sum_a < sum_b)
        return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        Point p(i);
        p.read();
        points.push_back(p);
    }

    sort(points.begin(), points.end(), f);

    for (int i = 0; i < n; i++)
        cout << points[i].k + 1 << " ";
    return 0;
}