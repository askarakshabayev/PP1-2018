#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> a;
string s;

bool f(string s1, string s2) {
    if (s1.size() < s2.size())
        return true;
    if (s1.size() > s2.size())
        return false;
    return s1 < s2;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a.push_back(s);
    }
    sort(a.begin(), a.end(), f);

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}