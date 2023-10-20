#include <simplecpp>
using namespace std;

int main() {
    srand(time(NULL));
    initCanvas("Random Walk", 1000, 1000);
    Turtle t;

    float angle = 0;

    for (int i=0; i<100; i++) {
        t.right(angle);
        angle = rand()%360;
        t.left(angle);
        t.forward(15);
        wait(0.1);
    }
    wait(5);
}