#include <iostream>
#include <set>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, x;
    set<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.insert(x);
    }

    // a.erase(5);

    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    
    int m;
    cin >> m;
    if (a.find(m) != a.end()) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    // for (int i: a) {
    //     cout << i << " ";
    // }

    return 0;
}