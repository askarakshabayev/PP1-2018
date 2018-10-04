#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2; // s1 = "abcde" s2 = "cd" -> YES
    int n = s1.size();
    int m = s2.size();
    if (m > n) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n - m + 1; i++) {
        bool ok = true;
        for (int j = 0; j < m; j++)
            if (s1[i + j] != s2[j])
                ok = false;
        if (ok == true) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}