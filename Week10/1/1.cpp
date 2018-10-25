#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    
    a.push_back(2);
    a.push_back(3);
    a.push_back(100);

    cout << a.size();

    return 0;
}