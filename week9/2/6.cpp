#include <iostream>

using namespace std;

int f(string s) {
    if (s == "")
        return 0;
    return (s[0] - '0') + f(s.substr(1));
}
// s = "12345" -> "2345"

int main() {
    string s;
    cin >> s;
    cout << f(s);
    return 0;
}