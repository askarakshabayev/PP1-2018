#include <iostream>

using namespace std;

int main() {
    // for (int i = 100; i <= 999; i++) {
    //     int a = i % 10;
    //     int b = i / 10 % 10;
    //     int c = i / 100;
    //     if ((a + b + c) % 3 == 0)
    //         cout << i << " ";
    // }
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++)
                if ((i + j + k) % 3 == 0)
                    cout << i << j << k << " ";
        }
    }
    return 0;
}