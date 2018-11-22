#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    string name;
    string surname;
    int salary;

    Employee() {}
    Employee(string _name, string _surname, int _salary) {
        name = _name;
        surname = _surname;
        salary = _salary;
    }

    void read() {
        cin >> name >> surname >> salary;
    }
    // "aaa bbb"
    string full_name() {
        return name + " " + surname;
    }

    void print() {
        cout << full_name() << " " << salary << endl;
    }
};

bool gr(Employee a, Employee b) {
    if (a.salary > b.salary)
        return true;
    if (a.salary < b.salary)
        return false;
    return a.full_name() > b.full_name();
}

int main() {
    vector<Employee> es;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Employee e;
        e.read();
        es.push_back(e);
    }
    // Employee a("ad", "kl", 30);
    sort(es.begin(), es.end(), gr);

    for (int i = 0; i < es.size(); i++)
        es[i].print();
    return 0;
}