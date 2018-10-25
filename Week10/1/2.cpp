#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    for (int i = 0; i < 10; i++)
        a.push_back(i + 1);
    
    a.pop_back();
    a.pop_back();

    for (int i = 0; i < a.size(); i++)
        cout << a[i];

     return 0;
}