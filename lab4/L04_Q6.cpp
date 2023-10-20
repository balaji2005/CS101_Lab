#include <simplecpp>

main_program {
    double r = 100;
    double x = 800, y = 500, x1 = 200;

    cin >> r >> x >> y >> x1;

    initCanvas("Circle", 1000, 1000);
    Circle c(x, y, r);
    Line l(0, 0, 0, 0);
    for(int i=0; i<arccosine(r/(x-x1))-35; i += 5) {
        double x2 = x-r*cosine(i);
        double y2 = y-r*sine(i);

        l.reset(x1, y, x2, y2);
        l.imprint();

        // cout << (y - y2)/(x2 - x1) << '\n';
        double theta = arctangent((y - y2)/(x2 - x1));

        l.reset(x2 +(y-y2)/tangent(2*i+theta), y, x2 - (x-x1-r)*cosine(2*i+theta), y - (x-x1-r)*sine(2*i+theta));
        l.imprint();
    }

    wait(1000000);
}