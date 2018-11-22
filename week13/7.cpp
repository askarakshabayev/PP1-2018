#include <iostream>

using namespace std;

void print(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << *(a + i) << " ";
}

int main() {
    // int a = 5, b = 10;
    // int *p = &a;
    // *p = 12;
    // p = &b;
    // *p = 20;
    // cout << a << " " << b;

    int a[5];
    for (int i = 0; i < 5; i++)
        a[i] = i + 1;
    print(a, 5);
    return 0;
}