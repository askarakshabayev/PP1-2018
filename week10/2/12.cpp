#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x, m;
    set<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.insert(x);
    }
    cin >> m;
    if (a.find(m) == a.end()) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    // 5
    // 1 2 3 4 5
    // 7
    


    return 0;
}