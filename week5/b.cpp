#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int maxi = b[0], max_i = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > maxi) {
            maxi = b[i];
            max_i = i;
        }
    }

    int maxi2 = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > maxi2 && i != max_i)
            maxi2 = b[i];
    }               

    if (sum <= maxi + maxi2)
        cout << "yes";
    else   
        cout << "no";
    return 0;
}