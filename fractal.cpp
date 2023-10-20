#include <simplecpp>

int main() {
    int seed = time(NULL);

    srand(seed);
    initCanvas("Fractal", 1000, 1000);
    Circle p(0, 0, 0);
    float width = 0.5;

    int pos = getClick();

    int x1 = pos / 65536, y1 = pos % 65536;

    p.reset(x1, y1, width);
    p.imprint();

    pos = getClick();

    int x2 = pos / 65536, y2 = pos % 65536;

    p.reset(x2, y2, width);
    p.imprint();

    pos = getClick();

    int x3 = pos / 65536, y3 = pos % 65536;

    p.reset(x3, y3, width);
    p.imprint();

    pos = getClick();

    int x = pos / 65536;
    int y = pos % 65536;

    p.reset(x, y, width);
    p.imprint();
    cout << "Printed triangle..." << endl;

    for(int i=0; i<=10000; i++) {
        int j = (rand() % 3) + 1;
        switch(j) {
            case 1:
                x = (x1 + x)/2;
                y = (y1 + y)/2;
                break;
            case 2:
                x = (x2 + x)/2;
                y = (y2 + y)/2;
                break;
            case 3:
                x = (x3 + x)/2;
                y = (y3 + y)/2;
                break;
        }
        p.reset(x, y, width);
        p.imprint();
    }

    getClick();
}