#include <iostream>

using namespace std;

int main() {
    // aa123AAasBB
    string s;
    cin >> s;
    int q = 0, w = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            q++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            w++;
    }
    cout << q << " " << w;
    return 0;
}