#include <iostream>
#include <cmath>

using namespace std;
string vowel = "aeiouyAEIOUY";

bool check(int a, int b, int c, int d) {
    if (a == c && b == d)
        return true;
    return false;
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        cout << s.substr(0, i + 1) << endl;

    return 0;
}