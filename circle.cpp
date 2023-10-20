#include <simplecpp>

int main() {
    initCanvas("Circle", 1000, 1000);
    Circle c(500, 500, 100);
    c.setFill(true);
    c.setColor(COLOR("red"));
    c.imprint();
    c.reset(500, 500, 99);
    c.setColor(COLOR("blue"));
    c.imprint();
    wait(10);
}