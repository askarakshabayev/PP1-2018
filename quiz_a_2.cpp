#include <iostream>

using namespace std;
int a[26];

int main() {
    string s;
    while (cin >> s) {
        int k;
        if (s[0] >= 'A' && s[0] <= 'Z')
            k = s[0] - 'A';
        else    
            k = s[0] - 'a';
        a[k]++;
    }

    for (int i = 0; i < 26; i++) {
        cout << a[i] << endl;
    }

    return 0;
}