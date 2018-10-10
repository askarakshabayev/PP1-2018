#include <iostream>

using namespace std;

// char 'a', '#', '3'
// int 0, 1000, 12
// "abc"
// 'a' - 97
// 'A' - 65
// '0' - 48
char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A'; // ch = 'c' - 'a' + 'A' -> 'C' 
    return ch;
}

string f(string s) {
    for (int i = 0; i < s.size(); i += 2)
        s[i] = toUpper(s[i]);
    return s;
}

int main() {
    string s;
    cin >> s;
    s = f(s);
    cout << s;
    return 0;
}