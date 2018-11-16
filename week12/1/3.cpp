#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        a.push_back(i + 1);
    }
    // 1 2 3 4 5 6 7 8 9 10
    
    rotate(a.begin() + 1, a.begin() + 3, a.end() - 2);

    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}