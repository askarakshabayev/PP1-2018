// aabcadz
// a - 3
// b - 1
// c - 1
// d - 1
// z - 1
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int ch = 'a'; ch <= 'z'; ch++) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) { 
            if (s[i] == ch)
                cnt++;
        }
        if (cnt > 0)
            cout << (char)ch  << "-" << cnt << endl;
        
    }
    return 0;
}