#include <iostream>
#include <queue>

using namespace std;
queue<int> q;

int main() {
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    return 0;
}