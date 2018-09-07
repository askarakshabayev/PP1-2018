#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 5;
    int a1 = a++;
    int b1 = ++b;
    cout << a << " " << b << endl;
    cout << a1 << " " << b1;
    return 0;
}