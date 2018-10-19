#include <iostream>
#include <cmath>

using namespace std;


int maxi(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    int a, b;
    cin >> a >> b;
    int c = maxi(a, b);
    cout << c << endl;
    
    int a1, b1;
    cin >> a1 >> b1;
    int c1 = maxi(a1, b1);
    cout << c1;
    return 0;
}