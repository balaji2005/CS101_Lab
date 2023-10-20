#include <simplecpp>

int main() {
    initCanvas("Key Press", 1000, 1000);
    Turtle turtle;
    int forward = 10;
    int right = 20;
    XEvent event;
    while(true) {
        nextEvent(event);
        // cout << '\33' << endl;
        if (keyPressEvent(event)) {
            // cout << charFromEvent(event) << endl;
            if (charFromEvent(event) == 'R') {
                turtle.forward(forward);
            }
            if (charFromEvent(event) == 'S') {
                turtle.right(right);
            }
            if (charFromEvent(event) == 'T') {
                turtle.forward(-forward);
            }
            if (charFromEvent(event) == 'Q') {
                turtle.left(right);
            }
            if (charFromEvent(event) == '\33') {
                break;
            }
        }
    }
}