#include <iostream>
#include <vector>

using namespace std;
vector<int> a(10, 1);

int main() {
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}