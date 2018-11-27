#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
struct Circle {
    double x, y, r;

    void read() {
        cin >> x >> y >> r;
    }

    double dist(Circle c) {
        double dx = x - c.x;
        double dy = y - c.y;
        return sqrt(dx * dx + dy * dy);
    } 
    
};
vector<Circle> a;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Circle p;
        p.read();
        a.push_back(p);
    }

    int ind1, ind2;
    ind1--;
    ind2--;
    if (a[ind1].dist(a[ind2]) > a[ind1].r + a[ind2].r) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}