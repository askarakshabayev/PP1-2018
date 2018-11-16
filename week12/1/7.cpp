#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int generate_random() {
    return rand() % 100;
}
vector<int> a(10);

int main() {
    generate(a.begin(), a.end(), generate_random);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}