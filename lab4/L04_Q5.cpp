#include <simplecpp>

main_program {
    float r = 100;
    int x = 800, y = 500, x1 = 200;

    cin >> r >> x >> y >> x1;

    initCanvas("Circle", 1000, 1000);
    Circle c(x, y, r);
    Line l(0, 0, 0, 0);
    for(int i=0; i<arccosine(r/(x-x1)); i += 5) {
        float x2 = x-r*cosine(i);
        float y2 = y-r*sine(i);

        // l.reset(x, y, x - 1000*cosine(i), y - 1000*sine(i));
        // l.imprint();

        l.reset(x1, y, x2, y2);
        l.imprint();

        cout << (y - y2)/(x2 - x1) << '\n';
        float theta = arctangent((y - y2)/(x2 - x1));

        l.reset(x2, y2, x2 - 1000*cosine(2*i+theta), y - 1000*sine(2*i+theta));
        l.imprint();
        // wait(1);
        // cout << theta << endl;
        // wait(0.2);
    }

    wait(10);
}