#include <iostream>
#include <set>
#include <cmath>

using namespace std;
set<double> a;

double len(int x1, int y1, int x2, int y2) {
    int a = x1 - x2;
    int b = y1 - y2;
    return sqrt(a * a + b * b);
}

int main() {
    int n, x1, y1, x2, y2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        a.insert(len(x1, y1, x2, y2));
    }
    cout << a.size();

    return 0;
}