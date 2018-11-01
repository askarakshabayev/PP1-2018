#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> a;
    
    a.insert(2);
    a.insert(5);
    a.insert(1);
    a.insert(2);
    a.insert(1);

    cout << a.size() << endl;

    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    cout << endl;
    a.erase(2);

    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";

    // c++ 11
    // for (int i: a) {
    //     cout << i << " ";
    // }
    return 0;
}