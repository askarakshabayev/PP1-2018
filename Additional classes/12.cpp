// 1 .. n
#include <iostream>

using namespace std;

bool isPrime(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;

    if (cnt == 2) {
        return true;
    }
    return false;
    // return (cnt == 2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (isPrime(i) == true)
            cout << i << " ";
    return 0;
}