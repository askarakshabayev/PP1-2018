#include <iostream>

using namespace std;

int main() {
    // s1 = dabckabc
    // s2 = abc
    // s1.find(s2) -> 1; s1.find(s2, 2) -> 5; s1.find(s2, 6) -> string::npos
    string s1, s2;
    cin >> s1 >> s2;
    // if (s1.find(s2) != string::npos)
    //     cout << "YES";
    // else
    //     cout << "NO";
    int k = 0; // k = 2
    // dasdklmnasdblkasdpp
    // asd
    while (s1.find(s2, k) != string::npos) {
        cout << s1.find(s2, k) << " ";
        k = s1.find(s2, k) + 1;

    }
    return 0;
}