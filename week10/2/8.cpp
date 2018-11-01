#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> a;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a.push_back(s);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}