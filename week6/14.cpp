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

// 3 3 result = 0, sum = 10
// 1 2 7  10 
// 1 7 1  9 
// 6 6 6  18            
    int b[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            b[i] += a[i][j];

    int result = -1, sum = -1;
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 0; j < m; j++)
            if (a[i][j] == maxi) {
                if (result == -1) {
                    result = i;
                    sum = b[i];
                } else if (b[i] > sum) {
                    result = i;
                    sum = b[i];
                }
            }
    }
    cout << result;
    return 0;
}