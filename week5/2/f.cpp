#include <iostream>

using namespace std;

int main() {
    int a[1001];
    for (int i = 0; i <= 1001; i++)
        a[i] = 0;

    int n, k;
    cin >> n; // 5
              // 4 8 1 9 4

    for (int i = 0; i < n; i++) {
        cin >> k; // k = 4 8 
        a[k]++;
    }

    for (int i = 1; i <= 1001; i++)
        if (a[i] == 2)
            cout << i;

    return 0;
}