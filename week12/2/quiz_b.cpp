#include <iostream>
#include <map>
#include <set>

using namespace std;
map<int, int> a;
set<int> result;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int x;
    while (cin >> x) {
        if (isPrime(x))
            continue;
        if (a[x] == 0) {
            a[x] = 1;
            continue;
        }
        result.insert(x);
    }
    set<int>::iterator it;
    for (it = result.begin(); it != result.end(); it++)
        cout << *it << " ";
    return 0;
}