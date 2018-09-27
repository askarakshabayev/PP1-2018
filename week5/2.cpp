#include <iostream>

using namespace std;

int main() {
    /*
    for (int i = 100; i <= 999; i++) {
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 100;
        if ((a + b + c) % 3 == 0)
            cout << i << endl;
    }
    */
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                if ((a + b + c) % 3 == 0)
                    cout << a << b << c << endl;
            }
        }
    }
    return 0;
}