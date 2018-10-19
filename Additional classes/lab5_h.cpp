#include <iostream>

using namespace std;

int a[10];

int main() {
    string s;
    cin >> s;
    // "614164" 0 - 48 1 - 49 2 - 50
    for (int i = 0; i < s.size(); i++)
        a[s[i] - '0']++;

    bool ok = true;
    int t = 0;
    for (int i = 0; i <= 9; i++) {
        if (a[i] == 0)
            continue;
        if (t == 0 && a[i] > 0)
            t = a[i];
        if (t != a[i])
            ok = false;
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}