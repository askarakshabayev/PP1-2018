#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a[] = {1, 1, 1, 2, 2, 3, 3, 3, 2, 2, 1, 1, 1};
int main() {
    int n = sizeof(a) / sizeof(int);
    vector<int> b(a, a + n);

    vector<int>::iterator it1, it2;

    it2 = unique(b.begin(), b.end());
    for (it1 = b.begin(); it1 != it2; it1++)
        cout << *it1 << " ";
    // 1 2 3 2 1

    return 0;
}