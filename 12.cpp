#include <iostream>
#include <map>

using namespace std;
map<string, int> a;

int main() {
    int n;
    cin >> n;
    string s;
    // n = 5
    // aaa
    // bbb
    // bbb
    // ccc
    // bbb
    // a['aaa'] = 1
    // a['bbb'] = 3
    // a['ccc'] = 1

    for (int i = 0; i < n; i++) {
        cin >> s;
        a[s]++;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> s;
        cout << a[s] << " ";
    }
    


    return 0;
}