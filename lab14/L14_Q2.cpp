#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point p1;
    Point p2;
};

bool inside(Rectangle r, Point p) {
    if ((r.p1.x - p.x)*(p.x - r.p2.x) > 0 && (r.p1.y - p.y)*(p.y - r.p2.y)) {
        return true;
    } else {
        return false;
    }
}

Rectangle shift(Rectangle r, double dx, double dy) {
    Rectangle s = {{r.p1.x + dx, r.p1.y + dy}, {r.p2.x + dx, r.p2.y + dy}};
    return s;
}