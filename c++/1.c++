#include <iostream>
using namespace std;

class Rectangle2; // Forward declaration

class Rectangle1 {
    int l, b;
public:
    Rectangle1(int x, int y) { l = x; b = y; }
    friend void compare(Rectangle1, Rectangle2);
};

class Rectangle2 {
    int l, b;
public:
    Rectangle2(int x, int y) { l = x; b = y; }
    friend void compare(Rectangle1, Rectangle2);
};

void compare(Rectangle1 r1, Rectangle2 r2) {
    int area1 = r1.l * r1.b;
    int area2 = r2.l * r2.b;

    if (area1 > area2)
        cout << "Rectangle1 is bigger\n";
    else if (area2 > area1)
        cout << "Rectangle2 is bigger\n";
    else
        cout << "Both are equal\n";
}

int main() {
    Rectangle1 r1(4, 5);
    Rectangle2 r2(6, 3);
    compare(r1, r2);
    return 0;
}
