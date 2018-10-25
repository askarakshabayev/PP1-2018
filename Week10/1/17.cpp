#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, x;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it;
    }


    set<int> b(a.begin(), a.end());
    return 0;
}