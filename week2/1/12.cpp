#include <iostream>

using namespace std;

// n = 123 3
// n = 12 2

int main() {
    int n;
    cin >> n; // n = 3
    int c = 0; // c = 0 + 4 + 2 + 3 
    
    while (n > 0) {
        c += n % 10;
        n = n / 10;        
    }
    cout << c;
    return 0;
}