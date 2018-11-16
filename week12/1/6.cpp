#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void f(int x) {
    cout << x * x << " ";
}
vector<int> a;

int main() {
    for (int i = 0; i < 10; i++) {
        a.push_back(i + 1);
    }

    for_each(a.begin(), a.end(), f);
    
    return 0;
}