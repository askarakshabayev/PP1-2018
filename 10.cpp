#include <iostream>

using namespace std;

struct BigInteger {
    int len;
    int a[100];

    BigInteger() {
        memset(a, 0, sizeof(a));
    }
    BigInteger(string s) {
        memset(a, 0, sizeof(a));
        len = s.size();
        for (int i = s.size() - 1, k = 0; i >= 0; i--, k++) {
            a[k] = s[i] - '0';
        }
    }

    void print() {
        for (int i = len - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }

    BigInteger operator + (BigInteger bi) {
        BigInteger c;
        c.len = max(len, bi.len);
        int k = 0;
        for (int i = 0; i < len; i++) {
            c.a[i] = a[i] + bi.a[i] + k;
            k = c.a[i] / 10;
            c.a[i] %= 10;
        }
        if (k > 0) {
            c.a[c.len] = k;
            c.len++;
        }
        return c;
    }

    string ToString() {
        string s = "";
        for (int i = len - 1; i >= 0; i--)
            s += char(a[i] + '0');
        return s;
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    BigInteger a(s1), b(s2);
    BigInteger c = a + b;
    cout << c.ToString();
    return 0;
}