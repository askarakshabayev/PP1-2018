#include <iostream>

using namespace std;

int u[100], a[100];
int n;

void print() {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void f(int k) {
    if (k == n) {   
        print();
        return;
    }
    for (int i = 1; i <= n; i++) {
        // if (u[i] == 0) {
        //     u[i] = 1;
            a[k] = i;
            f(k + 1);
            // u[i] = 0;
        // }
    }
}

int main() {
    cin >> n;
    f(0);
    return 0;
}