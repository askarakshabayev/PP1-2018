#include <iostream>

using namespace std;
int a[200][300];
int b[200];
// 2 3
// 1 2 3
// 2 1 4

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    // b[0] - sum 0 row
    // b[1] - sum 1
    // b[2] - sum 2

    int index = 0;
    for (int i = 0; i < n; i++)
        if (b[index] < b[i]) 
            index = i;
    
    cout << index;

    return 0;
}