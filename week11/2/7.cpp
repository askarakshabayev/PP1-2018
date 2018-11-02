#include <iostream>
#include <queue>

using namespace std;
queue<int> q;

int main() {
    q.push(1);
    q.push(3);
    q.push(10);
    q.push(5);
    cout << q.front() << endl;
    q.pop();
    cout << q.front();
    return 0;
}