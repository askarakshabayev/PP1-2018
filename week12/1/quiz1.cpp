#include <iostream>
#include <set>

using namespace std;

int len(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
    set<int> a;
    int n, x1, y1, x2, y2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        a.insert(len(x1, y1, x2, y2));
    }
    cout << a.size();

    return 0;
}