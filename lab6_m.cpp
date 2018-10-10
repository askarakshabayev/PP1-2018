#include <iostream>
#include <algorithm>

using namespace std;
int a[100001];
int n;

// 0 1 2 3 4 
// 1 2 3 4 5
void rev(int l, int r) {
    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // l1, r1, l2, r2
    // rev(l1, r1);
    // rev(l2, r2);
    rev(0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}