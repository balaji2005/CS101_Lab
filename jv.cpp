#include <simplecpp>

void h(int n, int i, Turtle* t) {
    if (n == 1) {
        if (i == 1) {
            t -> left(90);
        }
        t -> forward(10);
        t -> right(i*90);
        t -> forward(10);
        t -> right(i*90);
        t -> forward(10);
        t -> left(i*90);
        wait(1);
        return;
    }
    h(n-1, -i, t);
    t -> forward(10);
    h(n-1, -i, t);
    t -> forward(10);
    h(n-1, i, t);
    t -> forward(10);
    h(n-1, i, t);
}

int main() {
    initCanvas("JV", 1000, 1000);
    Turtle t;
    h(2, 1, &t);
    wait(5);
}