#include <simplecpp>

int main() {
    initCanvas("Circles", 1000, 1000);

    Circle c(500, 500, 5);
    c.imprint();
    c.scale(3);
    c.imprint();setScale
    c.setScale(2);
    c.imprint();
    c.scale(2);
    c.imprint();
    wait(3);
}