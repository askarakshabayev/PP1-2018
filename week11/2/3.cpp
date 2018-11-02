#include <iostream>
#include <map>

using namespace std;
#define fi first
#define se second

map<string, pair<string, string> > a;

int main() {
    freopen("input.txt", "r", stdin);
    string id, name, surname;
    while (cin >> id >> name >> surname) {
        a[id] = make_pair(name, surname);
    }

    // cout << a["18BD04"].first << " " << a["18BD04"].second;
    map<string, pair<string, string> >::iterator it;

    // for (it = a.begin(); it != a.end(); it++) {
    //     cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << endl;
    // }
    for (auto it: a) {
        cout << it.fi << " " << it.se.fi << " " << it.se.se << endl;
    }
    return 0;
}