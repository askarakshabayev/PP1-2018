#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            s += 1;
    if (s == 2)
        cout << "yes";
    else    
        cout << "no";
    return 0;
}