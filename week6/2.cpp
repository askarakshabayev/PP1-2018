#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > 0 && a[i - 1] > 0)
            cnt++;
        else if (a[i] < 0 && a[i - 1] < 0)
            cnt++;
    if (cnt > 0)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}