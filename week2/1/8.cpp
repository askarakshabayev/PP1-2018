#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // if (a + b > c && a + c > b && b + c > a) {
    //     cout << "yes";
    // } else {
    //     cout << "no";
    // }
    bool f1 = a + b > c; // f1 = true 
    bool f2 = a + c > b;
    bool f3 = b + c > a;
    if (f1 && f2 && f3) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}