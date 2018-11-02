#include <iostream>
#include <queue>

using namespace std;
queue<int> q;
int d[100];

int main() {
    int a, b;
    cin >> a >> b;
    q.push(a);

    while (q.empty() == false) {
        int x = q.front();
        if (x + 1 <= b && d[x + 1] == 0) {
            d[x + 1] = d[x] + 1;
            q.push(x + 1);
        }
        if (x * 2 <= b && d[x * 2] == 0) {
            d[x * 2] = d[x] + 1;
            q.push(x * 2);
        }
        q.pop();
    }
    cout << d[b];
    return 0;
}