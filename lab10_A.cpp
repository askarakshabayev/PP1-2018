#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, string> > a;

bool f(pair<int, string> a, pair<int, string> b) {
    if (a.first < b.first)
        return false;
    if (a.first > b.first)
        return true;
    return a.second > b.second;
}

int main() {
    int n, x;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s >> x;
        a.push_back(make_pair(x, s));
    }
    sort(a.begin(), a.end(), f);
    for (int i = 0; i < n; i++)
        cout << a[i].second << " " << a[i].first << endl;

    return 0;
}