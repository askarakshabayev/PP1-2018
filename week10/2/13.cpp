#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // 1 2 1 3 1
    // 1 2 3 
    set<int> b(a, a + n);
    cout << b.size();
    return 0;
}