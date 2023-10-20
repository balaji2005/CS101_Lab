#include <simplecpp>
using namespace std;

int main() {
    srand(time(NULL));
    initCanvas("Random Walk", 1000, 1000);
    Turtle t;

    for (int i=0; i<100; i++) {
        switch(rand()%2) {
            case 0:
                t.forward(5);
                break;
            case 1:
                t.forward(-5);
        }
        wait(0.1);
    }
    wait(5);
}