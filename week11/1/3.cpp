#include <iostream>
#include <map>

using namespace std;
map<string, pair<string, string> > a;
string id, name, surname;

int main() {
    freopen("input.txt", "r", stdin);
    while (cin >> id >> name >> surname) {
        a[id] = make_pair(name, surname);
    }

    map<string, pair<string, string> >::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << endl;
    }
    return 0;
}