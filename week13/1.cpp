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
    // Point a, b, c; // (1, 2, 3)
    
    // a.x = 1;
    // a.y = 2;
    // a.z = 3;
    
    // b.x = 2; // (2, 3, 4)
    // b.y = 3;
    // b.z = 4;
    Student a, b;

    a.name = "Bolat";
    a.surname = "BBB";
    a.gpa = 3.9;
    a.id = "18BD02";

    b.name = "aaa";
    b.surname = "ccc";
    b.gpa = 3.8;
    b.id = "18BD03";

    cout << a.name << " " << a.surname << " " << a.gpa << endl;
    cout << b.name << " " << b.surname << " " << b.gpa << endl;
    return 0;
}