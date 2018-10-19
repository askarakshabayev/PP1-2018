#include <iostream>

using namespace std;

char vowels[10] = {'a', 'e', 'o', 'i', 'u', 'A', 'E', 'O', 'I', 'U'};

string del(string s) {
    bool ok = true;
    while (ok == true) {
        ok = false;
        for (int i = 0; i < 10; i++) {
            size_t pos = s.find(vowels[i]);
            if (pos != string::npos) {
                ok = true;
                s.erase(pos, 1);
            }
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << del(s);
    return 0;
}