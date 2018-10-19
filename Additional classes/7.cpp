#include <iostream>

using namespace std;

int main() {
    // s = "asdfsdfasdf"
    // s.substr(index, length) = "dfs"
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
        cout << s.substr(0, i) << " ";
    return 0;
}