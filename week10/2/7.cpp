#include <iostream>
#include <vector>

using namespace std;
int n, x, y;
vector<pair<int, int> > a;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
        cout << a[i].first << " " << a[i].second << endl;
    return 0;
}