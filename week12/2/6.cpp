#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

void print(int x) {
    cout << x * x << " ";
}

int main() {
    for (int i = 0; i < 10; i++)
        a.push_back(i + 1);

    for_each(a.begin(), a.end(), print);    
    return 0;
}