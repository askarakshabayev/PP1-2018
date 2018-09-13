#include <iostream>

using namespace std;

int main() {
    string s;
    int c_0 = 0, c_1 = 0;
    cin >> s; // "123001"
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            c_0++;
        if (s[i] == '1')
            c_1++;
    }
    cout << c_0 << " " << c_1 << endl;
    return 0;
}