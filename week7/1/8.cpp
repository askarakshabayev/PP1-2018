#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin() + 1, s.end() - 2);
    cout << s;

    return 0;
}