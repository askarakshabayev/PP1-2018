#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template <typename ElementType>
void print (vector<ElementType> & arr) {
    arr[0] = 1;
    copy (arr.begin(),
          arr.end(), ostream_iterator<int>(cout," "));
}
int main()
{
    vector<int> a;
    for (int i=0;i<100; i++){
         a.push_back(i);
    }
    print<int>(a);
    cout << a[0];
}
