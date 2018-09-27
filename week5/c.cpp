#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int c_odd = 0, c_even = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            c_even += 1;
        else
            c_odd += 1;
    }

    int r = 0;
    for (int i = 0; i < n; i++){
        if (c_even == 1)
            if (a[i] % 2 == 0)
                r = i + 1;
        else
            if (a[i] % 2 == 1)
                r = i + 1;
    }
    cout << r;
    return 0;
}