#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s1;
    cin >> s1;
    string s2 = s1;
    reverse(s1.begin(), s1.end()); 
    if (s1 == s2) 
        cout << "YES";
    else
        cout << "NO";
    // int l = 0, r = s.size() - 1;
    // while (l < r) {
    //     if (s[l] != s[r]) {
    //         cout << "NO";
    //         return 0;
    //     }
    //     l++;
    //     r--;
    // }
    // cout << "YES";
    return 0;
}