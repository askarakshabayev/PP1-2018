#include <iostream>
#include <cmath>

using namespace std;

double h(int a, int b) {
    return sqrt(a * a + b * b);
}

bool isValid(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') 
            cnt++;
    }
    if (cnt >= n)
        return true;
    return false;
}

string f(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    return s;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << h(a, b);
    return 0;
}