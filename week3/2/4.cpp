// 3 4 2 7 0
#include <iostream>

using namespace std;

int main() {
    int k, s = 0;
    do {
        cin >> k; // 3 4 .. 0
        s += k;   // 0 + 3 + 4 ... + 0
    } while(k != 0);
    cout << s;
    return 0;
}