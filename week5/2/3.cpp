#include <iostream>

using namespace std;

int main() {
    int a[10];
    memset(a, 0, sizeof(a));

    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k]++; 
    }

    for (int i = 1; i <= 9; i++) { // i = 5, a[i] = 4
        for (int j = 0; j < a[i]; j++) {
            cout << i << " "; 
        }
    }
    return 0;
}