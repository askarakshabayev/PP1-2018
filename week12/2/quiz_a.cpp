#include <iostream>
#include <map>

using namespace std;
map<char, int> a;

int main() {
    string s;
    while (cin >> s) {
        if (s[0] >= 'A' && s[0] <= 'Z') // s[0] = 'C' -> 'c'
            s[0] = s[0] - 'A' + 'a';
        a[s[0]]++;
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << a[ch] << endl;
    }

    return 0;
}