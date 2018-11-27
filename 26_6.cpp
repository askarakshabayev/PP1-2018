#include <iostream>
#include <map>

using namespace std;
map<char, int> a;

int main() {
    string s;
    cin >> s;
    // a['t'] = 5
    // ttyttyc
    // a['t'] = 2
    // a['y'] = 1
    for (int i = 0; i < s.size(); i++)
        a[s[i]]++;
    
    // for (char i = 'a'; i <= 'z'; i++) {
    //     cout << i << " - " << a[i] << endl;
    // }

    map<char, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << (*it).first << " - " << (*it).second << endl; 
    return 0;
}