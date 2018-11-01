#include <iostream>
#include <algorithm>

using namespace std;
string a[100];
int n;

bool f(string s1, string s2) {
    if (s1.size() < s2.size())
        return true;
    if (s1.size() > s2.size())
        return false;
    return s1 < s2;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, f);

    for (int i = 0; i < n; i++) 
        cout << a[i] << " " << endl;
    return 0;
}