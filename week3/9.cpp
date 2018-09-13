#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s_e = 0, s_o = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            s_e += a[i];
        else 
            s_o += a[i];
    }
    cout << s_e - s_o;
    return 0;
}