#include <iostream>

using namespace std;

string vowels = "aeiou";

int main() {
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.size(); i++)
        // if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i')
        if (vowels.find(s[i]) != string::npos)
            k++;
    cout << k;
    return 0;
}