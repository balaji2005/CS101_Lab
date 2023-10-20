#include <simplecpp>

main_program {
	initCanvas();

	float r = 4;

	int p1 = getClick();
	float x1 = p1 / 65536;
	float y1 = p1 % 65536;
	Circle c1(x1, y1, r);

	int p2 = getClick();
	float x2 = p2 / 65536;
	float y2 = p2 % 65536;
	Circle c2(x2, y2, r);

	int p3 = getClick();
	float x3 = p3 / 65536;
	float y3 = p3 % 65536;
	Circle c3(x3, y3, r);

	float slope1 = (x1 - x2)/(y2 - y1);

	float x_1 = (x1 + x2)/2.0;
	float y_1 = (y1 + y2)/2.0;

	float slope2 = (x2 - x3)/(y3 - y2);

	float x_2 = (x2 + x3)/2.0;
	float y_2 = (y2 + y3)/2.0;

	float x0 = (slope1*x_1 - slope2*x_2 + y_2 - y_1)/(slope1 - slope2);
	float y0 = (slope1*slope2*(x_1 - x_2) + slope1*y_2 - slope2*y_1)/(slope1 - slope2);

	// Line l1(x0, y0, x_2, y_2);
	// Line l2(x0, y0, x_1, y_1);

	float radius = sqrt(pow(x3 - x0, 2) + pow(y3 - y0, 2));

	cout << x0 << ' ' << y0 << ' ' << radius << endl;
	Circle c0(x0, y0, radius);
	wait(5);
}