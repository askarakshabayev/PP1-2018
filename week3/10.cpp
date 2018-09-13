#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxi = a[0];
    int mini = a[0];
    int k = 0;
    int l = 0;
    for (int i = 1; i < n; i++) {
        if (maxi < a[i]) {
            maxi = a[i];
            k = i;
        }
        if (mini > a[i]) {
            mini = a[i];
            l = i;
        }
    }

    int t = a[k];
    a[k] = a[l];
    a[l] = t;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    // cin >> m;

    // int k = -1;
    // // 25 111 13 3 6
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == m) {
    //         k = i;
    //     }
    // }
    // cout << k;
    // int maxi = a[0];
    // int mini = a[0];
    // for (int i = 1; i < n; i++) {
    //     if (maxi < a[i]) {
    //         maxi = a[i];
    //     }
    //     if (mini > a[i]) {
    //         mini = a[i];
    //     }
    // }
    // cout << mini << " " << maxi;
    // int c = 0;    
    // for (int i = 0; i < n; i++) {
    //     if (a[i] > 0)
    //         c++;
    // }
    // cout << c;

    // for (int i = 1; i < n; i+=2) {
    //     cout << a[i] << " ";
    // }

    // for (int i = 0; i < n; i++) {
    //     if (a[i] % 2 == 0)
    //         cout << a[i] << " ";
    // }
    return 0;
}