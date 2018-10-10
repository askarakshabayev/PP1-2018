#include <iostream>

using namespace std;

bool isValid(string s, int n) {
    int k = 0; // n = 4
    // s = "a234b23cccc1234a"
    // k = 4
    s += 'a';
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            k++;
        else {
            if (k >= n)
                return true;
            k = 0;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    if (isValid(s, n) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}