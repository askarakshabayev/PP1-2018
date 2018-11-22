#include <iostream>

using namespace std;

struct Num {
    int a, b;
    Num() {}
    Num(int _a, int _b) {
        a = _a;
        b = _b;
    }

    void print() {
        cout << a << "/" << b << endl;
    }

    Num operator +(Num e) {
        // num.a = w.a
        // num.b = w.b
        Num t;
        t.a = a + e.a; // q.a + w.a
        t.b = b + e.b; // q.b + w.b
        return t;
    }

    Num operator -(int p) {
        Num t;
        t.a = a - p;
        t.b = a - p;
        return t;
    }
    bool operator < (Num e) {
        if (a / b < e.a / e.b)
            return true;
        return false;
    }
};

int main() {
    Num q(1, 2), w(2, 3);
    // q.print();
    // w.print();
    // Num c = q + w + q + w; // (q.a + w.a), (q.b + w.b)
    // cout << c.a << endl;
    // int a, b;
    // int c = a + b;

    if (q < w)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}