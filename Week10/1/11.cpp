#include <iostream>
#include <vector>

using namespace std;
int n, m, x;

int main() {
    cin >> n;
    vector<int> a[n];
    // 4
    // 5  5 1 6 4 8
    // 3  3 1 2
    // 6  4 6 1 4 2 3
    // 2  1 2
    // i = 0
    // m = 5
    // j = 0
    // x = 5
    for (int i = 0; i < n; i++) {
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> x;
            a[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < a[i].size(); j++)
            sum += a[i][j];
        cout << sum << " ";
    }
    return 0;
}