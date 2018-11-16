#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<int> a;
int n, x;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    int cnt = count_if(a.begin(), a.end(), isPrime);
    cout << cnt;
    return 0;
}