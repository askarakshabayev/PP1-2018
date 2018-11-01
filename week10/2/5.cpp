#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, x;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}