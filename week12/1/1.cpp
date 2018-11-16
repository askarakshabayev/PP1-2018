#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    int cnt = count_if(a.begin(), a.end(), isPrime);
    cout << cnt;
    return 0;
}