#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> a;
    a["aaa"] = 18;
    a["bbb"] = 19;
    a["kkk"] = 20;

    cout << a["bbb"];
    return 0;
}