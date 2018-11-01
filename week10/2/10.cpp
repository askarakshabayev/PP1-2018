#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1, v2, v3;
    vector<vector<int> > v;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);    

    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);    

    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);


    return 0;
}
