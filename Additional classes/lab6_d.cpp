#include <iostream>

using namespace std;
int a[10001];
int n;

bool f(int k) {
    for (int i = 0; i < n; i++)
        if (a[i] == k)
            return true;

    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    if (f(k) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}