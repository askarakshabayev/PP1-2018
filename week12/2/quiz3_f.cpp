#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, k, x;

vector<int> a, b;

void f(int x) {
    cout << x << " ";
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> x;
        a.push_back(x);
    }
    for (int i = k; i < n; i++) {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for_each(a.begin(), a.end(), f);
    for_each(b.begin(), b.end(), f);

    return 0;
}