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
    int r = 0, c = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (maxi < a[i][j]) {
                maxi = a[i][j];
                r = i;
                c = j;
            }

    cout << maxi << endl;
    cout << r << " " << c;
    return 0;
}