// 5
// 2 1 3 5 4
#include <iostream>

using namespace std;
int n;
int a[1000];

int f(int k) {
    if (k == n - 1)
        return a[n - 1];
    return a[k] + f(k + 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << f(3);
    return 0;
}