#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> a;
    a["Marat"] = 18;
    a["Saken"] = 20; // ("Saken", 20)
    a["Maral"] = 19; // ("Maral", 19)
    a["Marat"] = 20;
    a.insert(make_pair("Talgat", 21));

    cout << a["Saken"];

    return 0;
}