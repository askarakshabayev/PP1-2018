#include <iostream>

using namespace std;

int main() { 
    // s1 = "abcabcabcd" s2 = "abc" - 3
    // s1 = "aaaa" s2 = "aa" - 
    int a[100];
    string s1, s2;
    cin >> s1 >> s2;
    int k = 0;
    int cnt = 0;
    while (k < s1.size() && s1.find(s2, k) != string::npos) {
        // cout << s1.find(s2, k) << " ";
        // a[cnt] = s1.find(s2, k);
        cnt++;
        k = s1.find(s2, k) + 1;
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i)
        cout << a[i] << " "; 
    return 0;
}