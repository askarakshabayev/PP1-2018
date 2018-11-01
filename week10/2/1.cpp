#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    a.push_back(10);
    a.push_back(11);
    a.push_back(5);
    a.push_back(1);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.pop_back();
    
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";



    return 0;
}