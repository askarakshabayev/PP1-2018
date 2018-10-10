#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int q = 0, w = 0;
    // "1232" 
    // 49 + 51 == 50 + 50
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0)
            q += s[i] - '0';
        else
            w += s[i] - '0';
    }
    if (q == w)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}