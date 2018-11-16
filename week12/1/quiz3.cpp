#include <iostream>
#include <stack>

using namespace std;
stack<char> a;
string s;

void print() {
    if (a.empty())
        return;
    char x = a.top();
    a.pop();
    print();
    cout << x;
}

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            a.push(s[i]);
        else {
            if (!a.empty() && a.top() == '1') {
                a.pop();
                a.push('0');
            } else {
                a.push('1');
            }
        }
    }
    print();
    return 0;
}