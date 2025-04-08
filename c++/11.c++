#include <iostream>
using namespace std;

class Rectangle2; // Forward declaration

class Rectangle1 {
    int l, w;
public:
    void set(int a, int b) { l = a; w = b; }
    friend void compare(Rectangle1, Rectangle2);
};

class Rectangle2 {
    int l, w;
public:
    void set(int a, int b) { l = a; w = b; }
    friend void compare(Rectangle1, Rectangle2);
};

void compare(Rectangle1 r1, Rectangle2 r2) {
    int area1 = r1.l * r1.w;
    int area2 = r2.l * r2.w;

    cout << "Area1: " << area1 << ", Area2: " << area2 << endl;

    if (area1 > area2) cout << "Rectangle1 is bigger\n";
    else if (area2 > area1) cout << "Rectangle2 is bigger\n";
    else cout << "Both are equal\n";
}

int main() {
    Rectangle1 r1; Rectangle2 r2;
    r1.set(4, 5); // Area = 20
    r2.set(3, 6); // Area = 18
    compare(r1, r2);
    return 0;
}
