#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, x;
vector<int> a;

bool f(int x) {
    if (x % 2 == 0)
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    int cnt = count_if(a.begin(), a.end(), f);
    cout << cnt;
    return 0;
}