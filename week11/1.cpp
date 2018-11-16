#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    int x;
    while (cin >> x) {
        a.push_back(x);
    }    
    for (int i = 0; i < a.size(); i++)
        cout << a[i];
    return 0;

}