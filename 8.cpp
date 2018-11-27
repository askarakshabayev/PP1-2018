#include <iostream>

using namespace std;

void print(int *t) {
    for (int i = 0; i < 10; i++)
        cout << *(t + i) << " ";
}

int main() {
    // int a = 5;
    // int *b = &a;
    // *b = 10;
    // int c = 20;
    // b = &c;
    // *b = 5;

    // cout << a << " " << b;
    // cout << a << " " << c;
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i + 1;
    print(a);
    return 0;
}

