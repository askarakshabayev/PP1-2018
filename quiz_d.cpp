#include <iostream>
#include <set>

using namespace std;
set<string> a;

bool isPalin(string s) {
    for (int l = 0, r = s.size() - 1; l <= r; l++, r--) {
        if (s[l] != s[r])
            return false;
    }
    return true;
}

// int cntDigits(string s) {
//     int cnt = 0;
//     for (int i = 0; i < s.size(); i++)
//         if (s[i] >= '0' && s[i] <= '9')
//             cnt++;
//     return cnt;
// }

// bool check(string s) {
//     if (s.size() > 10)
//         return false;
//     if (cntDigits(s) < 3)
//         return false;
//     if (isPalin(s))
//         return false;
//     return true;
    
// }

int main() {
    string s;
    cin >> s;
    while (cin >> s) {
        if (!isPalin(s))
            a.insert(s);
    }
    set<string>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << endl;
    return 0;
}