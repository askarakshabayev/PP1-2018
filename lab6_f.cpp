#include <iostream>

using namespace std;

bool isValid(string s, int k) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) 
        if (s[i] >= '0' && s[i] <= '9')
            cnt++;

    if (cnt >= k)
        return true;
    return false;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    if (isValid(s, k) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}