#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    string name;
    string surname;
    double salary;

    string full_name() {
        return name + " " + surname;
    }

    void print() {
        cout << name << " " << surname << " " << salary << endl;
    }

    void read() {
        cin >> name >> surname >> salary;
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
        Employee e; // int a;
        e.read();
        es.push_back(e);
    }

    // for (int i = 0; i < n; i++)
    //     if (es[i].salary > 10)
    //         cout << es[i].full_name() << endl;
    sort(es.begin(), es.end(), gr);

    for (int i = 0; i < n; i++)
        es[i].print();
    return 0;
}