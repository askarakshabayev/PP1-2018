#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];

    // input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // find minimum element
    int mini = a[0][0]; int min_r = 0, min_c = 0;
    int maxi = a[0][0]; int max_r = 0, max_c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mini > a[i][j]) {
                mini = a[i][j];
                min_r = i;
                min_c = j;
            }
            if (maxi < a[i][j]) {
                maxi = a[i][j];
                max_r = i;
                max_c = j;
            }

        }
    }
    swap(a[min_r][min_c], a[max_r][max_c]);

    // output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << mini;
    return 0;
}