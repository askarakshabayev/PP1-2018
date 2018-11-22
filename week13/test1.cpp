#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a = 10, c = 20;
    int *b = &a;
    *b = 30;
    b = &c;
    *b = 10;
    cout << a << " " << c << " " << b << endl;
    return 0;
}