// 1 <= N <= 10 ^ 1000: "123321" 
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int c_1 = 0, c_2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            c_1++;
        if (s[i] == '2')
            c_2++;
    }
    cout << c_1 << " " << c_2;
    return 0;
}