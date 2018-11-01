#include <iostream>
#include <map>

using namespace std;

bool f(string s) {
    int k = 0;
    int k1 = 0;
    int k2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            k++;
        else if (s[i] == ')') {
            k--;
            if (k < 0)
                return false;
        } else if (s[i] == '[')
            k1++;
        else if (s[i] == ']') {
            k1--;
            if (k1 < 0)
                return false;
        } else if (s[i] == '{') {
            k2++;
        } else {
            k2--;
            if (k2 < 0)
                return false;
        }

    }
    if (k == 0 && k1 == 0 && k2 == 0)
        return true;
    return false;
}

int main() {
    string s;
    cin >> s;
    if (f(s) == true)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}