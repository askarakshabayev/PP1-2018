#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int maxi = a[0][0]; 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (maxi < a[i][j])
                maxi = a[i][j];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 0; j < m; j++)
            if (maxi == a[i][j]) {
                ok = true;
                break;
            }
        if (ok == true)
            cnt++;
    }
    cout << cnt;
   return 0;
}