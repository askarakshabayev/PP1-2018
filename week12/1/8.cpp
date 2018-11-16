#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;
int main() {
    // for (int i = 0; i < 3; i++)
    //     a.push_back(i + 1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    a.push_back(2);    
    // 1 1 2 2
    // 1 2 1 2
    // 1 2 2 1

    // 2 2 1 1 
    do {
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    } while(next_permutation(a.begin(), a.end()));
    
    return 0;
}