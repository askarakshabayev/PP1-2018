#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string name, surname;
    double gpa;
    string id;
};

int main() {

    vector<Student> a;
    string name, surname, id;
    double gpa;
    while (cin >> name >> surname >> gpa >> id) {
        Student st;
        st.name = name;
        st.surname = surname;
        st.gpa = gpa;
        st.id = id;
        a.push_back(st);
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i].gpa > 3) 
            cout << a[i].name << " " << a[i].surname << " " << a[i].gpa << " " << a[i].id << endl;
    }
    return 0;
}