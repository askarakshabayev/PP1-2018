// asdf    fsadf
// fasdf   asdfasdf    asdf
// 5
// cin >> s; => string
#include <iostream>

using namespace std;

//  sadfsad   asdfasdf
//    asdfasd      asdf   asdfasdf
int main() {
    freopen("input.txt", "r", stdin);
    string s;
    int k = 0; // s = asdfasdf
               // k = 5
    while (cin >> s) {
        cout << s << " ";
        k++;
    }
    cout << "\n" << k;
    return 0;
}