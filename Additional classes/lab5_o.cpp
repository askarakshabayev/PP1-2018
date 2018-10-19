#include <iostream>

using namespace std;

int main() {
    string s;
    char maxi;
    cin >> s;
    maxi = s[0];

    for (int i = 1; i < s.size(); i++)
        if (maxi < s[i])
            maxi = s[i];
    
    cout << maxi;
    return 0;
}