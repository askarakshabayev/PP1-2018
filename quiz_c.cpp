#include <iostream>

using namespace std;
string s;

bool isPalin(int l, int r) {
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPalin(l + 1, r - 1);
}

int main() {
    cin >> s;
    if (isPalin(0, s.size() - 1))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}