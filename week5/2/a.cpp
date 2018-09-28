#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    if (n % 2 == 0)
        cnt++;
    if (n % 5 == 0)
        cnt++;
    if (n % 17 == 0)
        cnt++;
    if (n % 19 == 0)
        cnt++;
    if (cnt >= 2)
        cout << "yes";
    else    
        cout << "no";
    return 0;
}