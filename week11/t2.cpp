#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a;
    for (int i = 0; i < 10; i++)
        a.push_back(i + 1);
    int n, m;
    cin >> n >> m;
    rotate(a.begin(), a.begin() + n, a.end() - m);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}