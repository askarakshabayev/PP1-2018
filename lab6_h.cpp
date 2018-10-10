#include <iostream>

using namespace std;

bool isValid(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] % 2 == 1) // '1' - 49, '3' - 51
            return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (isValid(s) == true)
        cout << "Valid";
    else
        cout << "Not valid";
    return 0;
}