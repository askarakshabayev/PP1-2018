#include <iostream>
#include <vector>
#include <set>

using namespace std;
int n, x, k;
set<int> a;

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (a.find(x - k) != a.end()) {
            cout << "YES";
            return 0;
        }
        a.insert(k);
    }

    cout << "NO";

    return 0;
}