// a1, a2, a3, a4, a5, a6
// sum(even) - sum(odd)
// 1 4 5 2 3 6
#include <iostream>

using namespace std;

int main() {
    int a1, a2, a3, a4, a5, a6;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
    int sum_even = 0;
    int sum_odd = 0;
    if (a1 % 2 == 0)
        sum_even += a1;
    else
        sum_odd += a1;

    if (a2 % 2 == 0)
        sum_even += a2;
    else
        sum_odd += a2;

    if (a3 % 2 == 0)
        sum_even += a3;
    else
        sum_odd += a3;

    if (a4 % 2 == 0)
        sum_even += a4;
    else
        sum_odd += a4;

    if (a5 % 2 == 0)
        sum_even += a5;
    else
        sum_odd += a5;

    if (a6 % 2 == 0)
        sum_even += a6;
    else
        sum_odd += a6;

    cout << sum_even - sum_odd;

    return 0;
}