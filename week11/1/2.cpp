#include <iostream>
#include <map>

using namespace std;
map<string, int> a;
string s;

// map 
// a["abc"] = 2
// a["ddd"] = 1
// a["kkk"] = 1
// 
int main() {
    freopen("input.txt", "r", stdin);
    while (cin >> s) {
        a[s] = a[s] + 1;
    }

    map<string, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    // for (auto it: a) {
    //     cout << it.first << " " << it.second << endl;
    // }
    return 0;
}