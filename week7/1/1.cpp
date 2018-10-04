#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    char ch;
    s1 = "abc";
    s2 = "123";
    ch = '#';
    string s3 = s1 + s2 + ch;
    cout << s3;
    return 0;
}