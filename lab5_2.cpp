#include <iostream>

using namespace std;

char toUpper(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch;
    return ch - 'a' + 'A'; // ch = 'c' - 97 + 65
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        s[i] = toUpper(s[i]);
    cout << s;
    return 0;
}