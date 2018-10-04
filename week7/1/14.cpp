#include <iostream>

using namespace std;

int cnt;
void aaa() {
    cnt = 2;
    cout << cnt;
}

int main() {
    cnt = 3;
    aaa();
    cout << cnt;
    return 0;
}