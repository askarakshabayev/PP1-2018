#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
string s;
int n;
vector<string> a;

int main() {
    n = 0;
    while (getline(cin, s)) {
        a.push_back(s);
        n++;
    }    
    int all = 0;
    // ss = "asdf    asdf   sd  asdf"
    for (int i = 0; i < a.size(); i++) {
        stringstream ss;
        ss << a[i];
        int k = 0;
        while (ss >> s)
            k++;
        all += k;
        cout << k << " ";
    }
    cout << endl;
    cout << n << " " << all << endl;
    return 0;
}