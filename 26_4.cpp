#include <iostream>
#include <sstream>

using namespace std;
string a[1001];
string b[1001];
int c[1001];

int n;

int sToI(string s) {
    // s = "321"
    // x = 321
    int x = 0;
    for (int i = 0; i < s.size(); i++)
        x = x * 10 + (s[i] - '0');
    return x;
    // stringstream ss;
    // ss << s;
    // int a;
    // ss >> a;
    // return a;
}

int main() {
    cin >> n;
    string s, num;
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        getline(cin, s); // name surname 40
        a[i] = s;
        num = "";
        int x = 0;
        int len = s.size();

        // aaa bbb 321
        // num = "3" + "21" = "321"
        while (s[len - 1] >= '0' && s[len - 1] <= '9') {
            num = s[len - 1] + num; 
            len--;
        }
        b[i] = num;
    }

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " " << b[i] << endl;

    int index = 0;
    for (int i = 0; i < n; i++)
        if (sToI(b[index]) <= sToI(b[i]))
            index = i;

    cout << a[index];
    return 0;
}