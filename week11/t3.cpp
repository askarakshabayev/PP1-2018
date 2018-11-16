#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 1, 1, 1, 2, 2, 3, 2, 2, 1};
    int n = sizeof(a) / sizeof(int);
    vector<int> b(a, a + n);
    vector<int>::iterator it1, it2;
    it2 = unique(b.begin(), b.end());
    // fill(a.begin() + 1, a.begin() + 3, 4);
    
    for (it1 = b.begin(); it1 != it2; it1++)
        cout << *it1 << " ";
    return 0;
}