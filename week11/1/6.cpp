#include <iostream>
#include <stack>

using namespace std;
stack<char> st;
string s;

bool f(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else {
            if (st.empty() == true)
                return false;
            char ch = st.top();
            if (ch == '(' && s[i] != ')')
                return false;
            if (ch == '{' && s[i] != '}')
                return false;
            if (ch == '[' && s[i] != ']')
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    cin >> s;
    if (f(s) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}