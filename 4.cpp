#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1; // hello -> olleh
    s2 = s1;   // hello
    // sort(s.begin(), s.end());
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
        cout << "Yes";
    else   
        cout << "No";
    return 0;
}