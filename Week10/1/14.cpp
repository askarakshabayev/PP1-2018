#include <iostream>
#include <set>

using namespace std;
// 1 2 6 19
int main() {
    set<int> a;
    a.insert(1);
    a.insert(19);
    a.insert(2);
    a.insert(1);
    a.insert(6);

    set<int>::iterator i;
    for (i = a.begin(); i != a.end(); i++)
        cout << *i << " ";
    return 0;
}