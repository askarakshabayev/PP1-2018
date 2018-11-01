#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(10, 2);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    a.insert(a.begin() + a.size() - 1, 4);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}