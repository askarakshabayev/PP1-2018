#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<int> a[n];
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " - "; 
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] + 1 << " ";
        cout << endl;
    }

    return 0;
}