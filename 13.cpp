#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isPalin(vector<int> a) {
    for (int i = 0, j = a.size() - 1; i < j; i++, j--) {
        if (a[i] != a[j])
            return false;
    }
    return true;
}

int main() {
    vector<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    
    sort(a.begin(), a.end());

    do {
        if (isPalin(a)) {
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";
            return 0;
        }
    } while (next_permutation(a.begin(), a.end()));

    cout << "Impossible";
    return 0;   
}