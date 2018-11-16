#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<vector<int> > a;

bool f(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int i = 0; i < a.size(); i++)
        sum_a += a[i];
    for (int j = 0; j < b.size(); j++)
        sum_b += b[j];
    if (sum_a < sum_b)
        return true;
    if (sum_a > sum_b)
        return false;
    if (a.size() < b.size())
        return true;
    if (a.size() > b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i])
            return true;
        if (a[i] > b[i])
            return false;
    }
    return false;
}

int main() {
    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> b;
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> x;
            b.push_back(x);
        }
        a.push_back(b);
    }

    sort(a.begin(), a.end(), f);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}