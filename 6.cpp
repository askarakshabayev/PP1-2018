#include <iostream>

using namespace std;

struct Num {
    int a, b;
  
    void read() {
        cin >> a >> b;
    }

    void print() {
        cout << a << "/" << b;
    }

    void simplify() {
        int a1 = a;
        int b1 = b;
        while (a1 > 0 && b1 > 0) {
            if (a1 > b1)
                a1 %= b1;
            else
                b1 %= a1;
        }
        int nod = a1 + b1;
        a = a / nod;
        b = b / nod;
    }

    Num operator +(Num p) {
        Num c;
        c.a = a * p.b + p.a * b;
        c.b = b * p.b;
        c.simplify();
        return c;
    }
};

int main() {
    Num a, b;
    a.read();
    b.read();
    Num c = a + b;
    c.print();
    return 0;
}