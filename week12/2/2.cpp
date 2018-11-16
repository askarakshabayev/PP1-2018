#include <iostream>
#include <algorithm>

using namespace std;
int a[100];
int n;

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt_prime = count_if(a, a + n, isPrime);
    cout << cnt_prime;
    return 0;
}