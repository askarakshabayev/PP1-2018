#include <iostream>
#include <vector>

using namespace std;

// 10
// 2 3 1 5 6 8 9 4 5 3
// 5 

int main() {
    vector<int> a;
    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    a.erase(a.begin() + m);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    // int x;
    // vector<int> a;

    // for (int i = 0; i < 10; i++) {
    //     cin >> x;
    //     a.push_back(x);
    // }

    // a.erase(a.begin() + 2);

    // for (int i = 0; i < a.size(); i++)
    //     cout << a[i] << " ";
    // return 0;
}