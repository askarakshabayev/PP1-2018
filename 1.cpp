#include <iostream>

using namespace std;

struct Point {
    int x, y, z;
};

struct Student {
    string name;
    string surname;
    double gpa;
    string id;
};

int main() {
    Student st1, st2;
    st1.name = "aaa";
    st1.surname = "bbb";
    st2.name = "ccc";
    st2.surname = "ddd";
    st1.gpa = 3.8;
    st2.gpa = 3.9;

    // Point a, b;
    // a.x = 1;
    // a.y = 2;
    // a.z = 3;
    // b.x = 2;
    // b.y = 3;
    // b.z = 4;
    // a(1, 2, 3), b(2, 3, 4)
    // cout << a.x << " " << a.y << " " << a.z;
    return 0;
}