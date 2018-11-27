#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > a; 

int main() {
    vector<int> b;
    vector<int> c;
    vector<int> d;
    
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    
    c.push_back(4);
    c.push_back(5);
    c.push_back(6);
    
    d.push_back(7);
    d.push_back(8);
    d.push_back(9);

    a.push_back(b);
    a.push_back(c);
    a.push_back(d);
    cout << a[1][2];
    return 0;
}