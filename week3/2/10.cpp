#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxi = a[0];
    int mini = a[0];
    int i_maxi = 0;
    int i_mini = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > maxi) {
            maxi = a[i];
            i_maxi = i;
        }
        if (a[i] < mini) {
            mini = a[i];
            i_mini = i;
        }
    }
    int t = a[i_maxi];
    a[i_maxi] = a[i_mini];
    a[i_mini] = t;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}