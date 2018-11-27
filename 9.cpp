#include <iostream>

using namespace std;

struct Person {
    string name;
    string surname;
    int age;

    Person() {
        name = "_";
        surname = "_";
        age = 0;
    }
    Person(string _name) {
        name = _name;
    }
    Person(string _name, string _surname) {
        name = _name;
        surname = _surname;
    }

    void fill(string _name, string _surname) {
        name = _name;
        surname = _surname;
    }
};

int main() {
    Person a;
    cout << a.name << " " << a.surname << " " << a.age;
    return 0;
}