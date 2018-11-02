#include <iostream>
#include <map>

using namespace std;

map<string, int> a;
string s;

int main() {
    freopen("input.txt", "r", stdin);
    while (cin >> s) {
        a[s]++;
    }

    map<string, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}