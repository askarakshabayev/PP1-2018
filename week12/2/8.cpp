#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;
int n, x;

void f(int x) {
    cout << x << " ";
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    // 1 2 3
    // 1 3 2
    // ..
    // 3 2 1
    do {
        for_each(a.begin(), a.end(), f);
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}