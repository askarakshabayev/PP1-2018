#include <iostream>
#include <string.h>
#include <algorithm>


using namespace std;
int a[1000], b[1000];

bool isPalin(string s) {
    string s1 = s;
    reverse(s.begin(), s.end());
    return s1 == s;
}

int main() {
    string s, t;
    cin >> t >> s;
    while (s.substr(0, t.size()) == t) {
        s.erase(0, t.size());
    }
    if (s == "")
        cout << "YES";
    else
        cout << "NO";
    return 0; 
}