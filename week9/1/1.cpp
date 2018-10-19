#include <iostream>

using namespace std;

int f1(char ch) {
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

int f(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        cnt += f1(s[i]);
    }
    return cnt;
}

int main() {
    return 0;
}