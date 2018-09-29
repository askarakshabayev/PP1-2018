#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    cin >> k;
    int pos = 0;
    while (pos < n && a[pos] >= k)
        pos++;
    cout << pos + 1;
    return 0;
}