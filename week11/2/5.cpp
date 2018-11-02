#include <iostream>
#include <stack>

using namespace std;
stack<int> st;

int main() {
    st.push(1);
    st.push(2);
    st.push(10);
    st.push(5);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;
}