#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a(10);

int main() {
    fill(a.begin(), a.begin() + 3, 4);
    fill(a.begin() + 3, a.end(), 5);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}