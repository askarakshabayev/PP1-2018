#include <iostream>

using namespace std;

int a[1000];
int b[1000];

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
        a[s1[i]]++;
    for (int i = 0; i < s2.size(); i++)
        b[s2[i]]++;

    bool ok = true;
    for (int i = 0; i < 1000; i++) {
        if (a[i] != b[i])
            ok = false;
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}