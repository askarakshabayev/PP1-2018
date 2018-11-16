#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a(10);

int f() {
    return rand() % 100;
}

int main() {
    generate(a.begin(), a.end(), f);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}