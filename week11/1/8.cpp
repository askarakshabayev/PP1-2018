#include <iostream>
#include <queue>

using namespace std;
queue<int> q;
int d[100];
int a, b;

int main() {
    cin >> a >> b;
    q.push(a);
    while (true) {
        int k = q.front();
        cout << k << " " << d[k] << endl;
        if (d[k + 1] == 0 && k + 1 <= b) {
            d[k + 1] = d[k] + 1;
            q.push(k + 1);
        }
        if (d[k * 2] == 0  && k * 2 <= b) {
            d[k * 2] = d[k] + 1;
            q.push(k * 2);
        }
        q.pop();
        if (d[b] > 0)
            break;
    }
    cout << d[b];
    return 0;
}