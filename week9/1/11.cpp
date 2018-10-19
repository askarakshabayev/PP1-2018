#include <iostream>

using namespace std;

bool f(int n) {
    if (n == 1)
        return true;
    if (n % 2 == 1)
        return false;
    return f(n / 2);
}

int main() {
    int n;
    cin >> n;
    if (f(n) == true)
        cout << "Yes";
    else    
        cout << "No";
    return 0;
}