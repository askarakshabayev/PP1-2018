#include <iostream>

using namespace std;

bool f(string s) {
    int cnt = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            cnt++;
        if (s[i] == ')')
            cnt--;
        if (s[i] == '[')
            cnt1++;
        if (s[i] == ']')
            cnt1--;
        if (s[i] == '{')
            cnt2++;
        if (s[i] == '}')
            cnt2--;

        if (cnt < 0 || cnt1 < 0 || cnt2 < 0)
            return false;
    }
    if (cnt != 0 || cnt1 != 0 || cnt2 != 0)
        return false;
    return true;
}

int main() {
    string s;
    cin >> s;
    if (f(s) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}