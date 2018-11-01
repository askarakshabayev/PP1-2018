#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    
    a.erase(a.begin() + 2);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";


    return 0;
}