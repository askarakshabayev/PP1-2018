#include <iostream>
#include <vector>

using namespace std;

int n, x_, y_;
vector<int> x, y;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x_ >> y_;
        x.push_back(x_);
        y.push_back(y_);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (x[i] > x[j] || (x[i] == x[j] && y[i] > y[j])) {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
    }

    for (int i = 0; i < n; i++)
        cout << x[i] << " " << y[i] << endl;
    return 0;
}