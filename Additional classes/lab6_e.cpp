#include <iostream>
#include <cmath>

using namespace std;

double h(int a, int b) {
    return sqrt(a * a + b * b);
}

int main() {
    int a, b;
    cout << h(a, b);
    return 0;
}