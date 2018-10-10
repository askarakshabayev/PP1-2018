#include <iostream>

using namespace std;
int a[1000001], b[1000001];
int n, x;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        b[x]++;
    }
    int cnt = 0;
    for (int i = 0; i <= 1000000; i++)
        cnt += min(a[i], b[i]);
    cout << cnt;
    return 0;
}