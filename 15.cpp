#include <iostream>

using namespace std;

int f(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << f(n) / (f(k) * f(n - k));
    // int f1 = 1, f2 = 1, f3 = 1;
    // // n!
    // for (int i = 1; i <= n; i++)
    //     f1 *= i;

    // // k!
    // for (int i = 1; i <= k; i++)
    //     f2 *= i;
    
    // // (n - k)!
    // for (int i = 1; i <= (n-k); i++)
    //     f3 *= i;
    
    // cout << f1 / (f2 * f3);
    return 0;
}