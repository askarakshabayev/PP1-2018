#include <iostream>

using namespace std;

int sum(int a) {
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    if (sum(n) % (n % 10) == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}