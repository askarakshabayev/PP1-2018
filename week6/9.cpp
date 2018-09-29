#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int g[a + 1];
    for (int i = 1; i <= a; i++)
        g[i] = i;

    // for (;b < c; b++, c--) 
    //     swap(g[b], g[c]);
    
    while (b < c) {
        swap(g[b], g[c]); // t = g[b]; g[b] = g[c]; g[c] = t
        c--;
        b++;
    }
    while (d < e) {
        swap(g[d], g[e]);
        e--;
        d++;
    }

    for (int i = 1; i <= a; i++)
        cout << g[i] << " ";
    return 0;
}