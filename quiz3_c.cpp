#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            st.push('0');
        else {
            if (st.empty() || st.top() == '0')
                st.push('1');
            else {
                st.pop();
                st.push('0');
            }
        }
    }
    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout << result;

    return 0;
}