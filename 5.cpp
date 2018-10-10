// hello
// ell

#include <iostream>

using namespace std;

int main() {
    // s1 = dabckabc
    // s2 = abc
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    for (int i = 0; i < n - m + 1; i++) {
        bool ok = true;
        for (int j = 0; j < m; j++)
            if (s1[i + j] != s2[j])
                ok = false;
        if (ok == true) {
            cout << i << " ";
        }
    }
    return 0;
}