#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            break;
        l++;
        r--;
    }
    if (l < r)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}