#include <iostream>
#include <algorithm>

using namespace std;

bool f(int k) {
    if (k % 2 == 0)
        return true;
    return false;
} 

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = count_if(a, a + n, f);
    cout << cnt;
    return 0;
}