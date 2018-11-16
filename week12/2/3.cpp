#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

int main() {
    int n, b, m, e;
    cin >> n >> b >> m >> e;
    for (int i = 0; i < n; i++)
        a.push_back(i + 1);
    rotate(a.begin() + b, a.begin() + m, a.end() - e);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}