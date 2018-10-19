#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    // s1.append(s2);
    s1.insert(2, s2);
    cout << s1;
    return 0;
}