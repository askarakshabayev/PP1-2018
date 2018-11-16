#include <iostream>
#include <map>

using namespace std;
map<int, int> a;

int main() {
    int n, x, k;
    cin >> n >> x;
    // -20 4 5 2 10
    // 6
    // k = 2
    // 6 - 2 = 4
    // [-20, 4, 5]
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (a[x - k] == 1) {
            cout << "YES";
            return 0;
        }
        a[k] = 1;
    }

    cout << "NO";

    return 0;
}