#include <iostream>
#include <stack> // FILO - first in last out

using namespace std;


int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.push(5);
    st.pop();
    
    cout << st.top();
    

    return 0;
}