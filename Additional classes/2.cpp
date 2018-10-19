#include <iostream>

using namespace std;

int main() {
    // s1 = "hello"
    // s2 = "world"
    // s3 = "helloworldt"
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s1 + " " + s2 + "  asdf";
    cout << s3;
    return 0;
}