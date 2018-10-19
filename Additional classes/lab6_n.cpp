#include <iostream>

using namespace std;
int a[1001][1001], b[1001][1001];

void t(int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[j][i] = a[i][j];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    t(n, m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}