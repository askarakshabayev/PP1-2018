#include <iostream>

using namespace std;

int main() {
    // matrix A
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    // matrix B
    int n1, m1;
    cin >> n1 >> m1;
    int b[n1][m1];
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            cin >> b[i][j];

    int c[n][m1];
    memset(c, 0, sizeof(c));
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m1; j++)
    //         c[i][j] = 0;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m1; j++)
            for (int k = 0; k < m; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m1; j++)
            cout << c[i][j] << '\t';
        cout << endl;
    }

    return 0;
}