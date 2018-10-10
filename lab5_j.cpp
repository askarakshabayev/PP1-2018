#include <iostream>

using namespace std;

bool isPalin(string s) {
    string s2 = s;
    reverse(s.begin(), s.end());
    if (s == s2)
        return true;
    return false;
}

int main() {
    string s, temp;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        temp = s;
        temp.erase(i, 1);
        if (isPalin(temp) == true) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";    
    return 0;
}