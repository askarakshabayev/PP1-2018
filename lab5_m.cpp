#include <iostream>

using namespace std;

int main() {
    string s;
    char ch;
    int k;
    cin >> s >> ch >> k;
    int t = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == ch) 
            t++;

    if (t == k)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}