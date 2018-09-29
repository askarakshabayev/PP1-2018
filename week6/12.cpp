#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int ok = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                ok = 1;
    // i = 1, j = 0
    // 0 1 2
    // 1 5 3
    // 2 3 4
    if (ok == 0)
        cout << "yes";
    else    
        cout << "no";
    return 0;
}