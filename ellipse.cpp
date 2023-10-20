#include <simplecpp>

main_program
{
    initCanvas("Ellipse", 1000, 1000);
    Turtle t1;
    int a = 300, b = 200;
    float theta = 30;
    t1.left(theta);
    t1.penUp();
    // t1.moveTo(500, 500);
    t1.forward(a);
    t1.left(90);
    t1.penDown();
    float dt = 0.1;
    for (float t = 0; t <= 360; t += dt)
    {
        // t1.move(a * cosine(t) * dt, b * sine(t) * dt);
        // float forw = sqrt(pow(a * sin(t) * dt, 2) + pow(b * cos(t) * dt, 2));
        // t1.forward(forw);
        // float lef = (b / a) * pow(1 / cos(t), 2) * dt;
        // t1.left(lef*180/PI);
        t1.moveTo(500 + a*cosine(t)*cosine(theta) - b*sine(t)*sine(theta), 500 - a*cosine(t)*sine(theta) - b * sine(t) * cosine(theta));
    }
    wait(10);
}