#include <iostream>
#include <set>

using namespace std;
multiset<int> a;
int main() {
    a.insert(2);
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(1);
    // 1 2 3
    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}