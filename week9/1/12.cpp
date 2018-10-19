#include <iostream>

using namespace std;
// f("12345") = 2
int f(string s) {
    if (s == "")
        return 0;
    return (s[0] + 1) % 2 + f(s.substr(1));
    // 48 - 0
    // 49 - 1
}

int main() {
    return 0;
}