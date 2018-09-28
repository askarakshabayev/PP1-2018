#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            // b[j][n - i - 1] = a[i][j];
            b[i][j] = a[j][n - i - 1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << '\t';
        cout << endl;
    }
    return 0;
}