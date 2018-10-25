#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}