#include <iostream>

using namespace std;
struct Point {
    int x, y;

    int getX() {
        return x;
    }
};

int main() {
    Point a;
    a.getX();
    return 0;
}