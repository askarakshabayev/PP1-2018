#include <iostream>
#include <algorithm>

using namespace std;
int a[100];
int n;
// 1 12 5 13 4 8
// 1 6  2 2  3 4
// 1 5 13 4 8 12

int f1(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}

bool f(int t, int p) {
    if (f1(t) < f1(p))
        return true;
    if (f1(t) > f1(p))
        return false;
    return t < p;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    // for (int i = 0; i < n; i++)
    //     for (int j = i + 1; j < n; j++)
    //         if (f(a[i], a[j]) == false)
    //             swap(a[i], a[j]);
    sort(a, a + n, f);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}