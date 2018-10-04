#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int index, length;
    cin >> index >> length;
    // cout << s.substr(index, length);
    cout << s.erase(index, length);
    return 0;
}