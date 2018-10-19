#include <iostream>

using namespace std;

int main() {
    string t, s;
    cin >> t >> s; 
    string p = "";
    // t = abc
    // s = abcabcabct
    // p = abcabcabcabc

    while (p.size() < s.size())
        p += t;
    if (p == s)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}