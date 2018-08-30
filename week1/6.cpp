#include <iostream>

using namespace std;

int main() {
    bool a, b;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    a = (n1 == n2) or (n1 == n3);
    b = (n1 == n2) and (n1 == n3);
    cout << a << b;
    return 0;
}