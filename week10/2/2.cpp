#include <iostream>

using namespace std;

int main() {
    // a[i] = *(a + i)
    int a[10]; // 0 .. 9
    for (int i = 0; i < 10; i++)
        a[i] = i + 1;

    for (int i = 0; i < 10; i++)
        cout << *(a + i) << " "; // a[i]
    return 0;
}