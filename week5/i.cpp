#include <iostream>

using namespace std;

int main() {
    /*
    int n;
    cin >> n;
    if (n >= 100 && n <= 999)
        cout << "yes";
    else    
        cout << "no";
    */
    string s;
    cin >> s;
    if (s.size() == 3)
        cout << "yes";
    else
        cout << "no";

    return 0;
}