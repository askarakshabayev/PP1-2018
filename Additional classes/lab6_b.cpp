#include <iostream>
#include <cmath>

using namespace std;
int a[10001], b[10001], d[10001];
int n;

void f() {
    for (int i = 0; i < n; i++)
        d[i] = abs(a[i] - b[i]);
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i]; 
    for (int i = 0; i < n; i++)
        cin >> b[i];
    f(); 
    for (int i = 0; i < n; i++)
        cout << d[i] << " ";
    return 0;
}