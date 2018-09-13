// 1 2 3 6 
// 4 2 3
// 3
// 0
#include <iostream>

using namespace std;

int main() {
    int k;
    int s = 0;
    // 1 2 3 0
    do {
        cin >> k; // k = 3
        s += k;   // s = 0 + 1 + 2 + 3
    } while (k != 0);
    cout << s;
    return 0;
}