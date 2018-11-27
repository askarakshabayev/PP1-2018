#include <iostream>

using namespace std;
int a[10][10];
int n, m;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            for (int i1 = 0; i1 < n; i1++)
                for (int j1 = 0; j1 < m; j1++) {
                    cout << i << " " << j << " " << i1 << " " << j1 << endl;
                    if (!(i == i1 && j == j1)) {
                        if (a[i][j] == a[i1][j1])
                            cnt++;
                    }
                }
    cout << cnt / 2;
    return 0;
}